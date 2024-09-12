/*20.Read carefully and complete the code for mentioned task.
class Employee
{
	private:
		char * empname;
		int * age;
	public:
	//your member functions member function.
}
int main()
{
	Scan and print details of 2 employees.
}*/
#include<iostream>
using namespace std;

class Employee
{
	private:
		char *empname;
		int *age;
	public:
	    void scandata();
		void printdata();	
};

int main()
{
	Employee emp1,emp2;
	emp1.scandata();
	emp2.scandata();
	
	emp1.printdata();
	emp2.printdata();
	return 0;
}

void Employee::scandata()
{
	empname = new char[30];
	age = new int(0);
	
	cout<<"\nEnter the employee name = ";
	cin.getline(empname,30);
	cout<<"\nEnter age = ";
	cin>>*age;
	cin.ignore(1);
}

void Employee::printdata()
{
	cout<<"\nName = "<<empname<<"  "<<"Age = "<<*age;
}

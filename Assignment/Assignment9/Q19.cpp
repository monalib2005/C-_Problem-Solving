/*19.Read carefully and complete the code for mentioned task.
class Employee
{
	public:
		char * empname;
		int * age;
	//do not define member function.
}
int main()
{
	Scan and print details of 2 employees.
}*/
#include<iostream>
using namespace std;

class Employee
{
	public:
		char *empname;
		int * age;
};

int main()
{
	Employee emp1,emp2;
	
	//allocating memory
	emp1.empname = new char[20];
	emp2.empname  = new char[20];
	
	emp1.age = new int;
	emp2.age = new int;
	cout<<"Enter the name of first employeev = ";
	cin.getline(emp1.empname,20);
	cout<<"\nEnter age = ";
	cin>>*emp1.age;
	cin.ignore(1);
	
	cout<<"Enter the name of second employeev = ";
	cin.getline(emp2.empname,20);
	cout<<"\nEnter age = ";
	cin>>*emp2.age;
	
	//printing valuees
	cout<<"\nEmp1 = "<<emp1.empname<<"   "<<"Age = "<<*emp1.age;
	cout<<"\nEmp2 = "<<emp2.empname<<"   "<<"Age = "<<*emp2.age;
	
	return 0;
}

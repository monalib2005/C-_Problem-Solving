/*21.Read carefully and complete the code for mentioned task.
class Student
{
	public:
		char * stdname;
		int * age;
	//you can define member functions here.
};
int main()
{
	scan details of 5 students and print them.	
}*/
#include<iostream>
using namespace std;

class Student
{
	public:
		char * stdname;
		int * age;
	//you can define member functions here.
	    void scan();
	    void print();
};
int main()
{
	//scan details of 5 students and print them.
	Student std[5];
	int i;
	//scaning
	for(i=0;i<=4;i++)
	{
		std[i].scan();
	}
	
	cout<<"The student details = ";
	for(i=0;i<=4;i++)
	{
		std[i].print();
	}
	return 0;	
}

void Student::scan()
{
	stdname = new char[30];
	age = new int(0);
	
	cout<<"\nEnter the student name = ";
	cin.getline(stdname,30);
	cout<<"\nEnter age = ";
	cin>>*age;
	cin.ignore(1);m
}

void Student::print()
{
	cout<<"\nName = "<<stdname<<"  "<<"age = "<<*age;
}

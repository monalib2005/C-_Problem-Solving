#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	public:
		char empname[20];
		char hometown[20];
};

int main()
{
	Employee emp1,emp2,emp3;
	cout<<"\nEnter the employee name = ";
	cin.getline(emp1.empname,20);
	cout<<"\Enter hometown = ";
	cin.getline(emp1.hometown,20);
	
	cout<<"\nEnter the employee name = ";
	cin.getline(emp2.empname,20);
	cout<<"Enter hometown = ";
	cin.getline(emp2.hometown,20);
	
	cout<<"\nEnter the employee name = ";
	cin.getline(emp3.empname,20);
	cout<<"Enter hometown = ";
	cin.getline(emp3.hometown,20);
	
	cout<<"\nEmployee = "<<emp1.empname<<"   "<<"Hometown = "<<emp1.hometown;
	cout<<"\nEmployee = "<<emp2.empname<<"   "<<"Hometown = "<<emp2.hometown;
	cout<<"\nEmployee = "<<emp3.empname<<"   "<<"Hometown = "<<emp3.hometown;
	return 0;
}

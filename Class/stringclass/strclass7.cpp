//scan the name and hometown of employee and find who are fro pune
#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	public:
		char hometown[20];
		char empname[20];
	public:
	    void scandata()
		{
			cout<<"Enter the employee name = ";
			cin.getline(empname,20);
			cout<<"\nEnter hometown = ";
			cin.getline(hometown,20);
			
		}
		void printdata()
		{
			cout<<"\nEmployee = "<<empname<<"    "<<"Hometown  = "<<hometown;
		}	
};

int main()
{
	Employee emp1,emp2,emp3;
	emp1.scandata();
	emp2.scandata();
	emp3.scandata();
	
	cout<<"\nThe employees from pune are = ";
	if(strcmp(&emp1.hometown[0],"Pune")==0)
	{
		emp1.printdata();
	}
	if(strcmp(emp2.hometown,"Pune")==0)
	{
		emp2.printdata();
	}
	if(strcmp(emp3.hometown,"Pune")==0)
	{
		emp3.printdata();
	}
	else
	{
		cout<<"\nNo one is from Pune.";
	}
	return 0;
}

#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	private:
		char empname[20];
		char hometown[20];
	public:
	    void scandata()
		{
			cout<<"Enter the employee name = ";
			cin.getline(empname,20);
			cout<<"Enter the hometown = ";
			cin.getline(hometown,20);
		}
		void printdata()
		{
			cout<<"\nEmployee = "<<empname<<"    "<<"Hometown  = "<<hometown;
		}
		int compare(char *p)
		{
			int res;
			res = strcmp(hometown,p);
			
			if(res == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}	
};

int main()
{
	Employee emp1,emp2;
	emp1.scandata();
	emp2.scandata();
	
	cout<<"\nThe employees from pune are = ";
	if(emp1.compare("Pune") == 1)
	{
		emp1.printdata();
	}
	if(emp2.compare("Pune") == 1)
	{
		emp2.printdata();
	}
	return 0;
}

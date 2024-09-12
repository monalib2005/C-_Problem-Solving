/*Q14.
class Employee
{
	char name[30];
	char hometown[20];
};
Create a database of 6 employees.
-Print only those employees whose name starts with 'A'.
-Print only those employees who belong to pune.*/
#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	char name[30];
	char hometown[20];
	public:
		void scan()
		{
			cout<<"\nenter name = ";
			cin.getline(name,30);
			cout<<"\nEnter hometown = ";
			cin.getline(hometown,20);
		}
		void print()
		{
			cout<<"\nName = "<<name;
			cout<<"\nHometown = "<<hometown;
		}
		friend int main();
};

int main()
{
	Employee emp[6];
	int i;
	for(i=0;i<6;i++)
	{
		emp[i].scan();
	}
	
	for(i=0;i<6;i++)
	{
		if(emp[i].name[0] == 'A')
		{
			emp[i].print();
		}
		
	}

    cout<<"\nEmplyee belongs to pune = ";
    for(i=0;i<6;i++)
	{
	    if(strcmp(emp[i].hometown,"Pune") == 0)
	    {
	      	emp[i].print();
	    }
	}
	return 0;
}

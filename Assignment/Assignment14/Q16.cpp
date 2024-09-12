/*Q11.
class Date
{
	public:
		int day;
		int month;
		int year;
		void getdate();
		void showdate();
};

class Employee
{
	public:
		//name
		//birth date
		//joining date
		//company name
};
Scan data for 3 employees and print it.
Think how can you relate Date and Employee clases.(is-a OR has-a).*/
#include<iostream>
#include<string>
using namespace std;

class Date
{
	public:
		int day;
		int month;
		int year;
		void getdate()
		{
			cout<<"\nEnter day = ";
			cin>>day;
			cout<<"\nEnter month = ";
			cin>>month;
			cout<<"\nEnter year = ";
			cin>>year;
		}
		
		void showdate()
		{
			cout<<day<<"/"<<month<<"/"<<year;
		}
};

class Employee
{
	
	public:
		string name;
		Date birthdate;
		Date joiningdate; //here both birthdate and joining date has (has-a relation)
		string companyname;
		
		void get()
		{
			cout<<"\nEnter name = ";
			getline(cin,name);
			cout<<"\nEnter birth date = ";
			birthdate.getdate();
			cout<<"\nenter joining date = ";
			joiningdate.getdate();
			cin.ignore(1);
			cout<<"\nEnter company name = ";
			getline(cin,companyname);
		}
		
		void show()
		{
			cout<<"\nName = "<<name;
			cout<<"\nBirth date = ";
			birthdate.showdate();
			cout<<"\nJoining date = ";
			joiningdate.showdate();
			cout<<"\nCompanay name = "<<companyname;
		}
};

int main()
{
	Employee emp[3];
	int i;
	for(i=0;i<3;i++)
	{
		emp[i].get();
	}
	
	for(i=0;i<3;i++)
	{
		emp[i].show();
	}
	return 0;
}

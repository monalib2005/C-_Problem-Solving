/*3.Scan data for 6 employees(name,age,hometown).
Scan employee to search in database.Check if that employee is present or not.*/

#include<iostream>
#include<string.h>
using namespace std;


//without operator overloading
//class Employee
//{
//	char name[30];
//	int age;
//	char hometown[20];
//	
//	public:
//		void scan()
//		{
//			cout<<"\nEnter name = ";
//			cin.getline(name,30);
//			cout<<"\nEnter age = ";
//			cin>>age;
//			cin.ignore(1);
//			cout<<"\nEnter hometown = ";
//			cin.getline(hometown,10);
//			
//		}
//		int compare(Employee emp)
//		{
//			int res,res1;
//			res = strcmp(name,emp.name);
//			res1 = strcmp(hometown,emp.hometown);
//			if(res == 0 && age == emp.age && res1 == 0)
//			{
//				return 1;
//			}
//			else
//			{
//				return 0;
//			}
//		}
//};
//
//int main()
//{
//	Employee emp[6];
//	int i;
//	for(i=0;i<6;i++)
//	{
//		emp[i].scan();
//	}
//	
//	Employee input;
//	cout<<"\nEnter the employee details to be searched = ";
//	input.scan();
//	
//	for(i=0;i<6;i++)
//	{
//		if(emp[i].compare(input) == 1)
//		{
//			cout<<"found";
//			break;
//		}
//	}
//	if(i==6)
//	{
//		cout<<"\nNot found.";
//	}
//	return 0;
//}








//with operator overloading
class Employee
{
	private:
		char name[20];
		int age;
		char hometown[10];
	public:
	    int operator==(Employee emp)
		{
			int res,res1;
			res = strcmp(name,emp.name);
			res1 = strcmp(hometown,emp.hometown);
			if(res == 0 && age == emp.age && res1 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		friend 	istream& operator>>(istream &din,Employee &e);
		friend ostream& operator<<(ostream &dout,Employee e);
		
		
};

int main()
{
	Employee emp[6];
	int i;
	for(i=0;i<6;i++)
	{
		cin>>emp[i];
	}
	
	Employee input;
	cin>>input;
	
	for(i=0;i<6;i++)
	{
		if(emp[i] == input)
		{
			cout<<"\nfound";
			break;
		}
	}
	if(i==6)
	{
		cout<<"\nnot found";
	}
}

istream& operator>>(istream &din,Employee &e)
{
	cout<<"\nEnter name = ";
	cin.getline(e.name,20);
	cout<<"\nEnter age = ";
	cin>>e.age;
	cin.ignore(1);
	cout<<"\nEnter hometown = ";
	cin.getline(e.hometown,10);
	return din;
}

ostream& operator<<(ostream &dout,Employee e)
{
	cout<<"\nname = "<<e.name;
	cout<<"\nage = "<<e.age;
	cout<<"\nhometown = "<<e.hometown;
	return dout;
}

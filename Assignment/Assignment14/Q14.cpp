/*Q10.
class Person
{
	public:
		string name;
		int age;
		void scanperson();
		void showperson();
};
class Employee
{
	public:
		string name;
		int age;
		string companyname;
};
class Teacher
{
	public:
		string name;
		int age;
		string schoolname;
};

Scan data for 2 employees and 2 Teachers.
Implement inheritance to solve this program.
You can make changes in class to implement inheritance.*/
#include<iostream>
using namespace std;

class Person
{
	public:
		string name;
		int age;
		virtual void scanperson() = 0;
		virtual void showperson() = 0;
};
class Employee:public Person
{
	public:
		string name;
		int age;
		string companyname;
		void scanperson()
		{
			cout<<"\nEnter name = ";
			getline(cin,name);
			cout<<"\nEnter age = ";
			cin>>age;
			cout<<"\nEnter company name = ";
			cin>>companyname;
			cin.ignore(1);
		}
		void showperson()
		{
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
			cout<<"\ncompany name = "<<companyname;
		}
};
class Teacher:public Person
{
	public:
		string name;
		int age;
		string schoolname;
		
		void scanperson()
		{
			cout<<"\nEnter name = ";
			getline(cin,name);
			cout<<"\nEnter age = ";
			cin>>age;
			cout<<"\nEnter school name = ";
			cin>>schoolname;
			cin.ignore(1);
		}
		void showperson()
		{
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
			cout<<"\nschool name = "<<schoolname;
		}
};

int main()
{
	Employee e1,e2;
	Teacher t1,t2;
	
	cout<<"\nStudent details = ";
	e1.scanperson();
	e2.scanperson();
	e1.showperson();
	e2.showperson();
	
	cout<<"\nTeacher details = ";
	t1.scanperson();
	t2.scanperson();
	t1.showperson();
	t2.showperson();
	
	return 0;
}

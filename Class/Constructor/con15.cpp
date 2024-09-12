#include<iostream>
using namespace std;

class Person
{
	private:
		char pername[20];
		int age;
		friend class Student;
};

class Student
{
	public:
		Person var;
		int marks;
		Student()
		{
			cout<<"\nEnter name:";
			cin.getline(var.pername,20);
			cout<<"\nEnter age = ";
			cin>>var.age;
			cout<<"\nEnter marks = ";
			cin>>marks;
		}
		void show()
		{
			cout<<"\nName = "<<var.pername;
			cout<<"\nAge = "<<var.age;
			cout<<"\nMarks = "<<marks;
		}
};

int main()
{
	Student std;
	std.show();
	return 0;
}

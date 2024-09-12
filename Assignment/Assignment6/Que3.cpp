/*Q3.
	class Student
	{
		public:
			char name[30];
			int age;
			char weight[20];
	}
Scan data of 2 Students from user.And print that data.
Do not add any member function.*/
#include<iostream>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		char weight[20];
};

int main()
{
	Student s1,s2;
	cout<<"Enter the name age and weight of student respectively = ";
	cin>>s1.name>>s1.age>>s1.weight;
	cout<<"\nname = "<<s1.name<<" Age = "<<s1.age<<" weight = "<<s1.weight;
	cout<<"\nEnter the name age and weight of student respectively = ";
	cin>>s2.name>>s2.age>>s2.weight;
	cout<<"\nname = "<<s2.name<<" Age = "<<s2.age<<" weight = "<<s2.weight;
	
	return 0;
}

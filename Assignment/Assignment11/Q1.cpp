//Q1.WAP to explain constructor and destructor for runtime objects.
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char stdname[20];
		int age;
		Student()
		{
			strcpy(stdname,"None");
			age = 0;
			cout<<"\nname = "<<stdname;
			cout<<"\nage = "<<age;
		}
		Student(char *p,int a)
		{
			cout<<"\nname = "<<p;
			cout<<"\nage = "<<a;
		}
};

int main()
{
	Student *std[1];
	std[0] = new Student;
	std[1] = new Student("xyz",19);
	return 0;
}

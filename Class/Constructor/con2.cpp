#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[20];
		int age;
		Student(char *p,int a)
		{
			strcpy(name,p);
			age = a;
		}
};

int main()
{
	Student std("Hello",20);
	cout<<std.name;
	cout<<std.age;
	return 0;
}

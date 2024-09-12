#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char stdname[20];
		int age;
		char hometown[20];
		Student()
		{
			cout<<"\nEnter name = ";
			cin.getline(stdname,20);
			cout<<"Enter sge = ";
			cin>>age;
			cin.ignore(1);
			cout<<"\nEnter hometown = ";
			cin.getline(hometown,20);
		}
		Student(char *p,int a,char *q)
		{
			strcpy(stdname,p);
			age = a;
			strcpy(hometown,q);
		}
		Student(Student &temp)
		{
			strcpy(stdname,temp.stdname);
			age = temp.age;
			strcpy(hometown,temp.hometown);
		}
};

int main()
{
	Student std1;
	Student std2("Virat Kohli",34,"Delhi");
	Student std3(std2);
	cout<<std3.stdname<<endl;
	cout<<std3.age<<endl;
	cout<<std3.hometown;
	return 0;
}

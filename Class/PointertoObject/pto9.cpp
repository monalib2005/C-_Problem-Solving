#include<iostream>
using namespace std;

class Student
{
	public:
		char *stdname;
};

int main()
{
	Student std;
	Student *p;
	p = &std;
	std.stdname = new char[20];
	cout<<"\nEnter name = ";
	cin.getline(std.stdname,30);
	
	cout<<"\nThe name of the student is = "<<std.stdname;
	return 0;
}

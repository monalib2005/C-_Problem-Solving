#include<iostream>
using namespace std;

class Student
{
	public:
	char *stdname;
	int *age;
	Student()
	{
		stdname = new char[30];
		age = new int(0);
		cout<<"\nEnter name = ";
		cin.getline(stdname,30);
		cout<<"\nEnter age = ";
		cin>>*age;
	}
	void show()
	{
		cout<<"\nname = "<<stdname;
		cout<<"\nAge = "<<*age;
	}
	~Student()
	{
		delete [] stdname;
		delete age; 
	}
};
void myfun();
int main()
{
	myfun();
	return 0;
}
void myfun()
{
	Student std;
	std.show();
}

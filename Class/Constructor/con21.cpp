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
			cout<<"Enter name = ";
			cin.getline(stdname,20);
			cout<<"\nENter age = ";
			cin>>*age;
			cin.ignore(1);
		}
		~Student()
		{
			cout<<"\nNAme = "<<stdname;
			cout<<"\nage = "<<*age;
		}
};

int main()
{
	Student std[5];
	return 0;
}

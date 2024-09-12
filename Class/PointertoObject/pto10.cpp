#include<iostream>
using namespace std;

class Student
{
	public:
		char *stdname;
};

int main()
{
	Student std1,std2;
	std1.stdname = new char[30];
	std2.stdname = new char[30];
	
	cout<<"\nEnter name = ";
	cin.getline(std1.stdname,30);
	cout<<"Name = "<<std1.stdname;
	
	cout<<"\nEnter name = ";
	cin.getline(std2.stdname,30);
	cout<<"Name = "<<std2.stdname;
	return 0;
}

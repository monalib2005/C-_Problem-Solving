#include<iostream>
using namespace std;

class Student
{
	private:
		char stdname[20];
		int age;
	public:
	    Student()
		{
			cout<<"\nEnter name = ";
			cin.getline(stdname,20);
			cout<<"\nENter age = ";
			cin>>age;
			cin.ignore(1);
		}
		~Student()
		{
			cout<<"\nName = "<<stdname;
			cout<<"\nage = "<<age;
		}	
};

int main()
{
	Student std[3];
	return 0;
}

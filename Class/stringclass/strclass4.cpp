#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char stdname[20];
		int age;
};

int main()
{
	Student std1,std2;
	
	
	//This one gives error because here cin is used first then getline() is used
//	cout<<"Enter the age = ";
//	cin>>std1.age;
//	cout<<"Enter the name = ";
//	cin.getline(&std1.stdname[0],20);
//	cout<<"\nstd1.name = "<<std1.stdname;
//	cout<<"\nstd1.age = "<<std1.age;
    
    //correct solution for it  write getline two times.
    
    cout<<"Enter the age = ";
	cin>>std1.age;
	cout<<"Enter the name = ";
	cin.getline(&std1.stdname[0],20);
	cin.getline(&std1.stdname[0],20);
	cout<<"\nstd1.name = "<<std1.stdname;
	cout<<"\nstd1.age = "<<std1.age;
	
	//other solution is to use ignore() to ignore the /n character from input buffer before cin
	cout<<"\nEnter the age = ";
	cin>>std2.age;
	cout<<"Enter the name = ";
	cin.ignore(1);
	cin.getline(&std2.stdname[0],20);
	cout<<"\nstd1.name = "<<std2.stdname;
	cout<<"\nstd1.age = "<<std2.age;
	return 0;
}

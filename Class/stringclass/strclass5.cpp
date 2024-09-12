#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private:
		int age;
		char stdname[20];
	public:
	    void scandata()
		{
			cout<<"Enter the name = ";
			cin.getline(stdname,20);
			cout<<"\nEnter age = ";
			cin>>age;
			cin.ignore(1);
		}
		void printdata()
		{
			cout<<"\nName = "<<stdname<<" "<<"Age = "<<age;
		}	
};

int main()
{
	Student std1,std2;
	std1.scandata();
	std2.scandata();
	
	std1.printdata();
	std2.printdata();
	return 0;
}

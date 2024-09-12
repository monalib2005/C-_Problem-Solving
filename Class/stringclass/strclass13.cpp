//create a database of five students containing name and age.Scan a name from user and search it in database.
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[20];
		int age;
		void scandata();
		void printdata();
};

int main()
{
	char std1[20];
	Student std[5];
	int i;
	for(i=0;i<=4;i++)
	{
		std[i].scandata();
	}
	cout<<"\nEnter the students name to be searched = ";
	cin.getline(std1,20);
	for(i=0;i<=4;i++)
	{
		if(strcmp(std1,&std[i].name[0]) == 0)
		{
			cout<<"\nfound";
			std[i].printdata();
		}
		if(i==5)
	   {
		   cout<<"\nNot found";
	    }
	}
	return 0;
}
void Student::scandata()
{
	cout<<"\nEnter the name = ";
	cin.getline(name,20);
	cout<<"\nEnter age = ";
	cin>>age;
	cin.ignore(1);
}
void Student::printdata()
{
	cout<<"\nname = "<<name<<"   "<<"Age = "<<age;
}

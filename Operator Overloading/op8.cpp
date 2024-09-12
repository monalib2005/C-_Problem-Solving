//for class Student contaning frivate name and age.scan data of 6 students and print them.
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private:
		char stdname[30];
		int age;
		
		Student()
		{
			strcpy(stdname,"None");
			age = 0;
		}
		friend istream& operator>>(istream &din,Student &S);
		friend ostream& operator<<(ostream &dout,Student S);
		friend int main();
};

int main()
{
	Student std[6];
	int i;
	
	//scanning
	for(i=0;i<6;i++)
	{
		cin>>std[i];
	}
	
	//printing
	for(i=0;i<6;i++)
	{
		cout<<std[i];
	}
	return 0;
}

istream& operator>>(istream &din,Student &S)
{
	cout<<"\nEnter name = ";
	cin.getline(S.stdname,30);
	cout<<"\nEnter age = ";
	cin>>S.age;
	cin.ignore(1);
	return din;
}

ostream& operator<<(ostream &dout,Student S)
{
	cout<<"\nname = "<<S.stdname;
	cout<<"\nage = "<<S.age;
	return dout;
}

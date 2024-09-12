//create a database of 6 students print all those students whose age is greater than or equal to 21.
#include<iostream>
using namespace std;

class Student
{
	private:
		char stdname[30];
		int age;
		
		
		int operator>=(int a)
		{
			if(age>=a)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		friend istream& operator>>(istream &din,Student &S);
		friend ostream& operator<<(ostream &dout,Student S);
		friend int main();
		
};

int main()
{
	Student std[6];
	int i;
	for(i=0;i<6;i++)
	{
		cin>>std[i];
	}
	
	for(i=0;i<6;i++)
	{
		if(std[i]>=21)
		{
			cout<<std[i];
		}
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

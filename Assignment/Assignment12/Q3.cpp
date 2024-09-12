/*3.
class Student
{
	private:
		char stdname[30];
		int age;
};
int main()
{
	Student std1,std2;
	cout<<"\nEnter data for students = ";
	cin>>std1>>std2;
	cout<<"\nYou entered = ";
	cout<<std1;
	cout<<std2;
}
//Given input and output messages properly.*/

#include<iostream>
using namespace std;

class Student
{
	private:
		char stdname[30];
		int age;
		friend istream& operator>>(istream &din,Student &s);
		friend ostream& operator<<(ostream &dout,Student s);
};
int main()
{
	Student std1,std2;
	cout<<"\nEnter data for students = ";
	cin>>std1>>std2;
	cout<<"\nYou entered = ";
	cout<<std1;
	cout<<std2;
}

istream& operator>>(istream &din,Student &s)
{
	cout<<"\nEnter data = ";
	cin.getline(s.stdname,30);
	cout<<"\nEnter age = ";
	cin>>s.age;
	cin.ignore(1);
	return din;
}

ostream& operator<<(ostream &dout,Student s)
{
	cout<<"\nname = "<<s.stdname;
	cout<<"\nage = "<<s.age;
	return dout;
}

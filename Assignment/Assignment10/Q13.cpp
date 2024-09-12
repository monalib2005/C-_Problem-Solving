/*3.
class Student
{
	public:
		char stdname[20];
		int age;
};
Create database of 5 students.Sort them in ascending order by name.
Write whole code in main().*/
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
	Student std[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter student name = ";
		cin.getline(std[i].stdname,20);
		cout<<"\nEnter age = ";
		cin>>std[i].age;
		cin.ignore(1);
	}
	
	Student temp;
	//sort
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(std[i].stdname,std[j].stdname)==1)
			{
				temp = std[i];
		    	std[i] = std[j];
		    	std[j] = temp;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		cout<<"\nStudent = "<<std[i].stdname;
		cout<<"\nAge = "<<std[i].age;
	}
	return 0;
}

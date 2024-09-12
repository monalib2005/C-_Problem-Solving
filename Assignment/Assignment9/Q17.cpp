/*17.Read carefully and complete the code for mentioned task.
class Student
{
	public:
		char stdname[20];
		int age;
};

Create a database of 6 students.
Scan a name from user,check if that student is present in the list or not.*/
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char stdname[20];
		int age;
		void scan();
		void print();
		int compare(char *p);
};

int main()
{
	Student std[6];
	char str[20];
	int i;
	for(i=0;i<=5;i++)
	{
		cout<<"\nEnter data of "<<i<<"th student";
		std[i].scan();
	}
	cin.ignore(1);
	cout<<"\nEnter the name you want to scan = ";
	cin.getline(str,20);
	
	for(i=0;i<=5;i++)
	{
		if(std[i].compare(str)==1)
		{
			cout<<"\nFound";
			std[i].print();
		}
	}
	return 0;
}
void Student::scan()
{
	cout<<"\nEnter name of student = ";
	cin>>stdname;
	cout<<"Enter age = ";
	cin>>age;
}

int Student::compare(char *p)
{
	int res;
	res = strcmp(stdname,p);
	if(res==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Student::print()
{
	cout<<"\nname = "<<stdname<<"    "<<"age = "<<age;
}



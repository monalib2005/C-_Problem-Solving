/*16.Read carefully and complete the code for mentioned task.
class Student
{
	private:
		char stdname[20];
		int age;
	public:
		//your member functions.
};
Create a database of 6 students and print it.*/
#include<iostream>
using namespace std;

class Student
{
	private:
		char stdname[20];
		int age;
	public:	
		void scan();
		void print();
};

int main()
{
	Student std[6];
	int i;
	
	for(i=0;i<=5;i++)
	{
		cout<<"\nEnter data of "<<i<<"th student";
		std[i].scan();
	}
	
	cout<<"\nThe details as follows = ";
	for(i=0;i<=5;i++)
	{
		std[i].print();
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
void Student::print()
{
	cout<<"\nname = "<<stdname<<"    "<<"age = "<<age;
}

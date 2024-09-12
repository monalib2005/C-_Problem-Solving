#include<iostream>
using namespace std;

class Student
{
	public:
		int roll;
		int age;
		
		void scan()
		{
			cout<<"\nEnter age and roll no. = ";
			cin>>roll>>age;
		}
		
		void print()
		{
			cout<<roll<<" "<<age;
		}
};

int main()
{
	Student std1,std2;
	std1.scan();
	std1.print();
	std2.scan();
	std2.print();
	return 0;
}

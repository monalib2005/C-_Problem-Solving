/*4.
	class Student	
	{
		public:
			float weight;
			int age;
	};
	int main()
	{
		Student T1,T2;
			
	}*/

#include<iostream>
using namespace std;

class Student
{
	public:
		float weight;
		int age;
		void scan();
		void print();
};

int main()
{
	Student T1,T2;
	T1.scan();
	T2.scan();
	T1.print();
	T2.print();
	return 0;
}
void Student::scan()
{
	cout<<"Enter the age and weight = ";
	cin>>age>>weight;
}

void Student::print()
{
	cout<<"\nThe age andd weight = ";
	cout<<age<<" "<<weight;
}

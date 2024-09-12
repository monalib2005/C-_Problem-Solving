/*Q7.
	class Student
	{
		private:
			float weight;
			int age;
		public:
			void scan();
			void print();
	};
Scan data of 2 students and print them.For any problem,read notebook first.*/
#include<iostream>
using namespace std;

class Student
{
	private:
		float weight;
		int age;
	public:
	    void scan();
	    void print();	
};

int main()
{
	Student s1,s2;
	s1.scan();
	s1.print();
	
	s2.scan();
	s2.print();
	//show();
	return 0;
}
void Student::scan()
{
	cout<<"\nEnter age and weight of student = ";
	cin>>age>>weight;
}
void Student::print()
{
	cout<<"\nAge = "<<age;
	cout<<"\nWeight = "<<weight;
}
//void show()
//{
//	Student s3;
//	cin>>s3.age;----->this will show error because show is a indpendent function meand non member function
//}

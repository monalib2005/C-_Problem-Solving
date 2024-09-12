//Q2.WAP to check working of runtime polymorphism.
#include<iostream>
using namespace std;


class Parent
{
	public:
		virtual void show()
		{
			cout<<"\nIn parent show()";
		}
};

class Child:public Parent
{
	public:
		void show()
		{
			cout<<"\nIn child show()";
		}
};
int main()
{
	Parent *ptr;
	Parent p;
	Child c;
	
	p.show();
	c.show();
	
	ptr = &p;
	ptr -> show();
	
	ptr = &c;
	ptr -> show();  //Here it will sees the content of a memory and not the datatype
	return 0;
}

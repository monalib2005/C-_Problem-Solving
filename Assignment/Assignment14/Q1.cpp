//Q1.WAP to check compiletime polymorphism.Use runtime objects.Refer notebook.
#include<iostream>
using namespace std;

class Parent
{
	public:
		void show()
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
	ptr ->show();
	
	ptr = &c;
	ptr -> show(); //here there is compile time polymorphism so here it sees the datatype of ptr
	return 0;
}

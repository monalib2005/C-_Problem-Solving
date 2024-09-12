//10.WAP to solve diamond problem using virtual class.

#include<iostream>
using namespace std;

class Grand
{
	public:
		void show()
		{
			cout<<"\nIn grand show()";
		}
};
class Parent1:virtual public Grand
{
	public:
		void show()
		{
			cout<<"\nIn parent1 show()";
		}
};

class Parent2:virtual public Grand
{
	public:
		void show()
		{
			cout<<"\nIn parent2 show()";
		}
};

class Child:public Parent1,public Parent2
{
	
};

int main()
{
	Child c;
	//c.show(); //this will access child show() if show() is present in child class
	
	c.Parent1::show();
	c.Parent2::show();
	c.Grand::show(); //here it will no show any error because we use virtual keyword and hence it creates it's only one copy show() in child class 
	return 0;
}

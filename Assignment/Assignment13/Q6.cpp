/*6.
class Parent
{
	private:
		int y;
		void disp();
	public:
		int z;
		void show();
};
class Child : public Parent
{
	public:
		void myfun();
};
In main() function,create an object of class Child and try to access each member
in Child as well as in its Parent class.(Access each member)
Write path you have used to access each member in your program in Comment.*/

#include<iostream>
using namespace std;

class Parent
{
	private:
		int y;
		void disp();
	public:
		int z;
		void show();
};
class Child : public Parent
{
	public:
		void myfun();
};

int main()
{
	Child c;
	c.z = 10;
	cout<<"\nz  = "<<c.z;
	c.show();
	
	c.myfun();
	return 0;
}

void Parent::disp()
{
	cout<<"\nIn parent disp()";
}

void Parent::show()
{
	cout<<"\nIn parent show()";
	
	y=15;
	disp();
	cout<<"\ny = "<<y;
}

void Child::myfun()
{
	cout<<"\nIn child myfun()";
	
}

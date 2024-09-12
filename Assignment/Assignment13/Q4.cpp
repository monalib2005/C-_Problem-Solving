/*4.
class Parent
{
	protected:
		int y;
		void disp();
	public:
		int z;
		void show();
};
class Child : protected Parent
{
	public:
		void myfun();
};
In main() function,create an object of class Child and try to access each member
in Child as well as in its Parent class.(Access each member)
Do not change access specifier of any member.Do not add any member to child.
Write path you have used to access each member in your program in Comment.*/

#include<iostream>
using namespace std;

class Parent
{
	protected:
		int y;
		void disp();
	public:
		int z;
		void show();
};
class Child : protected Parent
{
	public:
		void myfun();
};

int main()
{
	Child c;
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
}

void Child::myfun()
{
	cout<<"\nIn child myfun()";
	y = 12;
	cout<<endl<<y;
	show();
	disp();
}

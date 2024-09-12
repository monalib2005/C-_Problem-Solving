/*1.WAP to check how multilevel inheritance works.
Try to access members of Parent from Child class.*/

#include<iostream>
using namespace std;

class Grand
{
	public:
		int x=2;
		void show()
		{
			cout<<"\nIn grand show()";
		}
};

class Parent:public Grand
{
	public:
		int y = 5;
		void disp()
		{
			cout<<"\nIn disp()";
		}
};

class Child:public Parent
{
	public:
		int z = 7;
		void print()
		{
			cout<<"\nIn print";
		}
};

int main()
{
	Child c;
	cout<<"\nx = "<<c.x;
	cout<<"\ny = "<<c.y;
	cout<<"\nz = "<<c.z;
	c.print();
	c.Parent::disp();
	c.Grand::show();
}

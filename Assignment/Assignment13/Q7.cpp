/*7.
class Parent
{
	private:
		int y;
		void disp();
	protected:
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
		void disp()
		{
			y = 12;
			cout<<y;
			cout<<"\nIn parent disp()";
		}
	protected:
		int z;
		void show()
		{
			cout<<"\nIn parent show()";
			z = 18;
			cout<<z<<endl;
			disp(); //from here it is calleble because it is the member of Parent class
		}
};
class Child : public Parent
{
	public:
		void myfun()
		{
			cout<<"\nIn child myfun";
			show();
			//disp(); --->not accessible beacuse it is private in parent
			
		}
};

int main()
{
	Child c;
//	c.myfun();  //myfun() -->show()-->disp()
	return  0;
}

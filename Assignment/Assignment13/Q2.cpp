/*2.WAP to check how multiple inheritance works.
Try to access members of Parent from Child class.
Check ambiguity when multiple Parents contain same member.*/

#include<iostream>
using namespace std;

class Parent1
{
	public:
		int x = 4;
		void show()
		{
			cout<<"\nIn parent1";
		}
};
class Parent2
{
	public:
		int y = 3;
		void show()
		{
			cout<<"\nIn parent2";
		}
};
class child:public Parent1,public Parent2
{
	public:
		int z = 5;
};

int main()
{
	child c;
	//c.show(); --->we can't access it using only object bcoz there are two show() from which child is inherited
	cout<<"\nx = "<<c.x;
	cout<<"\ny = "<<c.y;
	cout<<"\nz = "<<c.z;
	c.Parent1::show();
	c.Parent2::show();
	return 0;
}

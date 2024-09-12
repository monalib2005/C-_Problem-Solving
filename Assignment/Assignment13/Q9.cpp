/*9.
WAP to check working of Diamond problem.Solve this problem using membership identity label.*/

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
class Parent1:public Grand
{
	public:
		void show()
		{
			cout<<"\nIn parent1 show()";
		}
};

class Parent2:public Grand
{
	public:
		void show()
		{
			cout<<"\nIn parent2 show()";
		}
};

class Child:public Parent1,public Parent2
{
	//public:
//		void show()
//		{
//			cout<<"\nIn child show()";
//		}
};

int main()
{
	Child c;
	//c.show(); ///this will access child show() if show() is present in child class
	
	c.Parent1::show();
	c.Parent2::show();
	c.Grand::show(); //its shows the error that Grand is an ambiguous base of child because both there child and also contains show()
	return 0;
}

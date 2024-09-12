/*13.
WAP to check constructor execution in multiple inheritance.
Both default and parameterized constructors expected.
Try virtual class also.*/

#include<iostream>
using namespace std;

class Parent1
{
	public:
		Parent1()
		{
			cout<<"\nIn default parent1";
		}
		Parent1(int a)
		{
			cout<<"\nIn parent1 para";
		}
};
class Parent2
{
	public:
		Parent2()
		{
			cout<<"\nIn Parent2 default";
		}
		Parent2(int a)
		{
			cout<<"\nIn Parent2 para";
		}
};
class Parent3
{
	public:
		Parent3()
		{
			cout<<"\nIn Parent2 default";
		}
		Parent3(int a)
		{
			cout<<"\nIn Parent3 para";
		}
};
class Child:public Parent2,virtual public Parent1,public Parent3
{
	public:
		Child()
		{
			cout<<"\nIn child default";
		}
		Child(int a):Parent2(4),Parent1(5),Parent3(7)
		{
			cout<<"\nIn child para";
		}
};

int main()
{
	Child c(2); //Parent1 para -->Parent2 Para -->Parent3 para
	return 0;
}

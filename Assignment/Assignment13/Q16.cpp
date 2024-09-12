/*16.
WAP to understand execution of destructor in inheritance(multiple inheritance).*/
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
		
		~Parent1()
		{
			cout<<"\nIn parent1 destructor";
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
		~Parent2()
		{
			cout<<"\nIn Parent2 destructor";
		}
};
class Child:public Parent1,public Parent2
{
	public:
		Child()
		{
			cout<<"\nIn child default";
		}
		Child(int a):Parent2(4),Parent1(5)
		{
			cout<<"\nIn child para";
		}
		~Child()
		{
			cout<<"\nIn child destructor";
		}
};

int main()
{
	Child c1;
	Child c2(3);  //destructor will call in opposite sequece of the constructor
	return 0;
}

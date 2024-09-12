/*15.
WAP to understand execution of destructor in inheritance(multilevel inheritance).*/

#include<iostream>
using namespace std;

class Grand
{
	public:
		Grand()
		{
			cout<<"\nIn default grand.";
		}
		Grand(int a)
		{
			cout<<"\nIn parameterized grand";
		}
		~Grand()
		{
			cout<<"\nIn grand desturctor";
		}
};

class Parent:public Grand
{
	public:
		Parent()
		{
			cout<<"\nIn parent grand";
		}
		Parent(int a):Grand(2)
		{
			cout<<"\nIn parent para";
		}
		~Parent()
		{
			cout<<"\nIn parent destructor";
		}
};

class Child:public Parent
{
	public:
		Child():Parent(4)  //we cannot call grand here beacuse grand is not direct base class of Child
		{
			cout<<"\nIn child default";
		}
		Child(int a):Parent(10)
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
	Child c; //Grand parameterized,Parent para,child default
	Child c1(3); //Grand para,Parent para,child parametreized
	return 0;
}

/*11.WAP to check constructor execution in multilevel inheritance.
Both default and parameterized constructors expected.*/

#include<iostream>
using namespace std;

//class Grand
//{
//	public:
//		Grand()
//		{
//			cout<<"\nIn default grand.";
//		}
//		Grand(int a)
//		{
//			cout<<"\nIn parameterized grand";
//		}
//};
//
//class Parent:public Grand
//{
//	public:
//		Parent()
//		{
//			cout<<"\nIn parent grand";
//		}
//		Parent(int a)
//		{
//			cout<<"\nIn parent para";
//		}
//};
//
//class Child:public Parent
//{
//	public:
//		Child()
//		{
//			cout<<"\nIn child default";
//		}
//		Child(int a)
//		{
//			cout<<"\nIn child para";
//		}
//};
//int main()
//{
//	Child c; //Grand default,Parent default,child default
//	Child c1(3); //Grand default,Parent default,child parametreized
//	return 0;
//}


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
};
int main()
{
	Child c; //Grand parameterized,Parent para,child default
	Child c1(3); //Grand para,Parent para,child parametreized
	return 0;
}

/*12.
WAP to check constructor execution in multiple inheritance.
Only default constructor expected.*/

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
};

int main()
{
	Child c1; //default parent1 -->default parent2 --->Child default
	Child c2(2);  //parent1 para -->parent2 para -->Child para
	
	//here the constructor will called in the sequence of there inheritance no matter in which sequence we called construnctors
	return 0;
}

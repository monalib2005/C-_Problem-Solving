//Q5.WAP to check working of initialization list.
#include<iostream>
using namespace std;

class Parent1
{
	public:
		int x,y;
		
		Parent1():x(0),y(0){};
};

class Parent2
{
	public:
		int a,b;
		
		Parent2():a(2),b(a+4){}; // we can initialize b using a but not a using b because a is declared first and then b
};
int main()
{
	Parent1 obj;
	cout<<"\nx = "<<obj.x;
	cout<<"\ny = "<<obj.y;
	
	Parent2 var;
	cout<<"\nx = "<<var.a;
	cout<<"\ny = "<<var.b;
	return 0;
}

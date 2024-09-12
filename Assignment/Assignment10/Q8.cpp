//8.WAP to understand pointer to member declarator and pointer to member operator.
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void show()
		{
			cout<<"\nx = "<<x;
			cout<<"\ny = "<<y;
		}
};

int main()
{
	Number var;
	var.x = 2;
	var.y = 6;
	int Number::*p = &Number::x;
	int Number::*q = &Number::y;
	void (Number::*r) () = &Number::show;
	cout<<"\nx = "<<var.*p;
	cout<<"\ny = "<<var.*q;
	
	//using function
	(var.*r )();
	return 0;
}

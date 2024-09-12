#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		Number()
		{
			cout<<"\nIn default";
			x=0;
			y=0;
		}
		Number(int a,int b)
		{
			cout<<"\nIn parametrized";
			x=a;
			y=b;
		}
};

int main()
{
	Number *p;
	Number *q;
	p = new Number();  //call of default constructor
	q = new Number(2,5); //call of parametrized constructor
	return 0;
}

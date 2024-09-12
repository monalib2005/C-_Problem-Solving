#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

int main()
{
	Number *p;
	p = new Number();
	p->x = 3;
	cout<<"\nEnter the value of y = ";
	cin>>p->y;
	cout<<"\nThe numbers are = ";
	cout<<p->x<<" "<<p->y;
	delete p;
	return 0;
}

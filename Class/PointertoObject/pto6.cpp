#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

int main()
{
	Number *p,*q,*r;
	p = new Number();
	q = new Number();
	r = new Number();
	
	cout<<"\nEnter the numbers = ";
	cin>>p->x>>p->y;
	cout<<"\nEnter the numbers = ";
	cin>>q->x>>q->y;
	
	//Addition
	r->x = p->x + q->x;
	r->y = p->y + q->y;
	
	cout<<"\nAddition = "<<r->x<<" "<<r->y;
	return 0;
}

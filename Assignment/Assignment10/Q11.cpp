/*1.
class Distance
{
	public:
		int km,mtr;
};
Create 2 runtime objects in main().Scan and print their data.*/
#include<iostream>
using namespace std;

class Distance
{
	public:
		int km,mtr;
};

int main()
{
	Distance *p,*q;
	p = new Distance();
	q = new Distance();
	cout<<"\nEnter distance in km and mtr = ";
	cin>>p->km>>p->mtr;
	cout<<"\nEnter distance in km and mtr = ";
	cin>>q->km>>q->mtr;
	
	cout<<"\nkm1 = "<<p->km;
	cout<<"\nmtr1 = "<<p->mtr;
	cout<<"\nkm2 = "<<q->km;
	cout<<"\nmtr2 = "<<q->mtr;
	
	return 0;
}

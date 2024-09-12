#include<iostream>
using namespace std;

class Distance
{
	private:
		int km,mtr;
	public:
	    void scan();
		void convert();
		void show();	
};

int main()
{
	Distance *p,*q,*r;
	p=new Distance();
	q=new Distance();
	p->scan();
	q->scan();
	p->convert();
	q->convert();
	p->show();
	q->show();
	return 0;
}

void Distance::scan()
{
	cout<<"\nEnter km = ";
	cin>>km;
	cout<<"\nEnter meter = ";
	cin>>mtr;
}

void Distance::convert()
{
	km = km + mtr/1000;
	mtr = mtr%1000;
}

void Distance::show()
{
	cout<<"\nkm = "<<km;
	cout<<"\nMtr = "<<mtr;
}

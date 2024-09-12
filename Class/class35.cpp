#include<iostream>
using namespace std;

class Distance
{
	private:
		int km,mtr;
		
	public:
	    void scan();
	    void print();
	private:
		void convert();	
};

int main()
{
	Distance d1,d2;
	d1.scan();
	d2.scan();
	d1.print();
	d2.print();
	return 0;
}
void Distance::scan()
{
	cout<<"\nEnter distance = ";
	cin>>km>>mtr;
	convert();
}
void Distance::convert()
{
	km = km + mtr/1000;
	mtr = mtr%1000;
}
void Distance::print()
{
	cout<<"\nkm = "<<km;
	cout<<"\nmtr = "<<mtr;
}

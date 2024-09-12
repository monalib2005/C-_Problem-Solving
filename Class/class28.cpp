#include<iostream>
using namespace std;

class Distance
{
	public:
		int km,mtr;
		
		void scan()
		{
			cout<<"\nENter the km and mtr = ";
			cin>>km>>mtr;
		}
		void print()
		{
			cout<<"\nKm = "<<km;
			cout<<"\nmtr = "<<mtr;
		}
};
void convert(Distance &dist);
int main()
{
	Distance d1;
	d1.scan();
	convert(d1);
	d1.print();
	return 0;
}
void convert(Distance &dist)
{
	dist.km = dist.km + dist.mtr/1000;
	dist.mtr = dist.mtr%1000;
}

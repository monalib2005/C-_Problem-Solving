#include<iostream>
using namespace std;

class Distance
{
	public:
		int km,mtr;
};
void scan(Distance &dist);
void convert(Distance &dist);
void print(Distance dist);
int main()
{
	Distance d1;
	scan(d1);
	convert(d1);
	print(d1);
	return 0;
}
void scan(Distance &dist)
{
	cout<<"\nEnter the distance in km and mtr = ";
	cin>>dist.km>>dist.mtr;
}
void convert(Distance &dist)
{
	dist.km = dist.km + dist.mtr/1000;
	dist.mtr = dist.mtr%1000;
}
void print(Distance dist)
{
	cout<<"\nkm = "<<dist.km;
	cout<<"\nmtr = "<<dist.mtr;
}

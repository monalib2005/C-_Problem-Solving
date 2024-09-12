#include<iostream>
using namespace std;

class Distance
{
	public:
		int km,mtr;
		
		void scan()
		{
			cout<<"\nEnter the distance in km and mtr = ";
	        cin>>km>>mtr;
		}
		static void print(Distance &dist);
};
void scan(Distance &dist);
void convert(Distance &dist);
int main()
{
	Distance d1,d2;
	d1.scan();
	scan(d2);
	convert(d1);
	convert(d2);
	Distance::print(d1);
	Distance::print(d2);
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
void Distance::print(Distance &dist)
{
	cout<<"\nkm = "<<dist.km;
	cout<<"\nmtr = "<<dist.mtr;
}

#include<iostream>
using namespace std;

class Distance
{
	public:
	   int km;
 	   int mtr;
};

int main()
{
	Distance d1,d2;
	cout<<"\nEnter the number = ";
	cin>>d1.km>>d1.mtr;
	cout<<"\nEnter the number = ";
	cin>>d2.km>>d2.mtr;
	d1.km = d1.km + (d1.mtr/1000);
	d1.mtr = d1.mtr %1000;
	cout<<"\nd1.km = "<<d1.km;
	cout<<"\nd1.mtr = "<<d1.mtr;
	return 0;
}

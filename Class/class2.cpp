//scan the two distances from user.convert them in meter and print them in meter
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
	cout<<"\nEnter the disatnce in km and meter = ";
	cin>>d1.km>>d1.mtr;
	cout<<"\nEnter the distance in km and meter = ";
	cin>>d2.km>>d2.mtr;
	d1.mtr= d1.km *1000 + d1.mtr;
	d2.mtr= d2.km*1000 + d2.mtr;
	cout<<"\nDistance in km are = ";
	cout<<d1.mtr<<"\n"<<d2.mtr;
	 
	return 0;
}

#include<iostream>
using namespace std;

class Power;
class Base
{
	public:
		int b;
		void scan(Power &power);
};

class Power
{
	public:
		int p;
		void scan(Base &base);
		void calc(Base &base);
};

void Base::scan(Power &power)
{
	cout<<"Enter the base and power = ";
	cin>>b;
	cin>>power.p;
}

void Power::calc(Base &base)
{
	int i;
	int ans = 1;
	for(i=1;i<=p;i++)
	{
		ans = ans * base.b;
	}
	cout<<"\nans = "<<ans;
}

int main()
{
	Base base;
	Power power;
	base.scan(power);
	power.calc(base);
	return 0;
}

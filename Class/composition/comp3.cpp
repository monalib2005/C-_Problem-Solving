#include<iostream>
using namespace std;

class Power;
class Base
{
	public:
		int b;
		void scan();
		void calc(Power &pow);
};

class Power
{
	public:
		int p;
		void scan();
};

void Power::scan()
{
	cout<<"Enter power = ";
	cin>>p;
}

void Base::scan()
{
	cout<<"\nEnter base = ";
	cin>>b;
}

void Base::calc(Power &pow)
{
	int i;
	int ans = 1;
	for(i=1;i<=pow.p;i++)
	{
		ans = ans * b;
	}
	cout<<"ans = "<<ans;
}

int main()
{
	Power power;
	Base base;
	power.scan();
	base.scan();
	base.calc(power);
	return 0;
}

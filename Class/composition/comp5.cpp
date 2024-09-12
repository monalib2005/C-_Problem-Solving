#include<iostream>
using namespace std;

class Base;
class Power
{
	int p;
	public:
		void scan();
		int getPower()
		{
			return p;
		}
};

class Base
{
	int b;
	public:
		void scan();
		int getBase( )
		{
			return b;
		}
};

void Power::scan()
{
	cout<<"\nEnter power = ";
	cin>>p;
}

void Base::scan()
{
	cout<<"\nEnter base  = ";
	cin>>b;
}
void calc(Base &base,Power &power);
int main()
{
	Power power;
	Base base;
	power.scan();
	base.scan();
	calc(base,power);
	return 0;
}

void calc(Base &base,Power &power)
{
	int i;
	int ans = 1;
	int tp,tb;
	tp = power.getPower();
	tb = base.getBase();
	for(i=1;i<=tp;i++)
	{
		ans = ans * tb;
	}
	cout<<"\nans = "<<ans;
}

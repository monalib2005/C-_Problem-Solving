#include<iostream>
using namespace std;

class Base
{
	int b;
	public:
		void scan();
		int getBase()
		{
			return b;
		}
		
};

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

class Digit
{
	public:
		static void calc(Base &base,Power &power);
};

void Base::scan()
{
	cout<<"\nEnter base = ";
	cin>>b;
}

void Power::scan()
{
	cout<<"\nEnter the power = ";
	cin>>p;
}

void Digit::calc(Base &base,Power &power)
{
	int i;
	int tb,tp;
	int ans = 1;
	base.scan();
	power.scan();
	tp = power.getPower(); //do not forget to call the function by using object
	tb = base.getBase(); 
	for(i=1;i<=tp;i++)
	{
        ans =  ans * tb;
        
	}
	cout<<"\nAns = "<<ans;
}

int main()
{
	Base base;
	Power power;
	Digit::calc(base,power);
	return 0;
}

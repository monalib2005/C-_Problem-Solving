/*6.
	class Base
	{
		public:
			int b;
			void scan(parameter list if necessary)
			//scan() function will scan base and power.
	};
	class Power
	{
		public;
			int p;
			void calc(parameter list if necessary);
			//calc function will find out base raised to power.
	};
	
	int main()
	{
		Base base;
		Power power;
		//Your code here.
	}*/

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
		void calc(Base base);
};

int main()
{
	Base base;
	Power power;
	base.scan(power);
	power.calc(base);
	return 0;
}
void Base::scan(Power &power)
{
	cout<<"\nEnter the base = ";
	cin>>b;
	cout<<"\nEnter the power = ";
	cin>>power.p;
}
void Power::calc(Base base)
{
	int i;
	int ans = 1;
	for(i=1;i<=p;i++)
	{
		ans = ans * base.b;
	}
	cout<<"\nans = "<<ans;
}

/*4.
	class Base
	{
		int b;
	};
	class Power
	{
		int p;
	};
	class Calc
	{
		public:
			int calculate(parameter list);
	}
	int main()
	{
		Base base;
		Power power;
		Calc obj;
		//using calculate function find base^power.
		//print answer in main().	
	}*/
#include<iostream>
using namespace std;

class Base
{
	int b;
	friend class Calc;
};
class Power
{
	int p;
	friend class Calc;
};
class Calc
{
	public:
		int calculate(Base base,Power power);
};

int main()
{
	Base base;
	Power power;
	Calc obj;
	int res = obj.calculate(base,power);
	cout<<"\n ans = "<<res;
	return 0;
}
int Calc::calculate(Base base,Power power)
{
	cout<<"\nEnter base = ";
	cin>>base.b;
	cout<<"\nEnter power = ";
	cin>>power.p;
	int i;
	int ans = 1;
	for(i=0;i<power.p;i++)
	{
		ans = ans * base.b;
	}
	return ans;
}

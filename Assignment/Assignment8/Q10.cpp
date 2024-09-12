/*6.
	class Base
	{
		int b;
		//do not add member function here.
	};
	class Power
	{
		int p;
		//do not add member function here.
	};
	class Calc
	{
		private:
			int calculate();
			//do not add member function here.
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
	//do not add member function here.
	friend class Calc;
};
class Power
{
	int p;
	//do not add member function here.
	friend class Calc;
};
class Calc
{
	private:
		int calculate(Base base,Power power);
		//do not add member function here.
		friend int main();
};
int main()
{
	Base base;
	Power power;
	Calc obj;
	int res = obj.calculate(base,power);
	cout<<"\nAns  = "<<res;
	return 0;
}

int Calc::calculate(Base base,Power power)
{
	cout<<"\nEnter the base = ";
	cin>>base.b;
	cout<<"\nEnter the power = ";
	cin>>power.p;
	int i;
	int ans = 1;
	for(i=0;i<power.p;i++)
	{
		ans = ans * base.b;
	}
	return ans;
}

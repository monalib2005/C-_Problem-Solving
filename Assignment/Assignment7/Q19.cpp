/*4.
	class Base
	{
		int b;
		//you can add member function
	};
	class Power
	{
		int p;
		//you can add member function
	};
	class Calc
	{
		public:
			void calculate(parameter list);
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
	public:
		void scan();
		int getb();
};

class Power
{
	int p;
	public:
		void scan();
		int getp();
};

class calc
{
	public:
		void calculate(Base &b,Power &p);
};

int main()
{
	Base base;
	Power power;
	calc obj;
	base.scan();
	power.scan();
	obj.calculate(base,power);
	return 0;
}

void Base::scan()
{
	cout<<"\nENter the base = ";
	cin>>b;
}
int Base::getb()
{
	return b;
}
void Power::scan()
{
	cout<<"\nENter the power = ";
	cin>>p;
}
int Power::getp()
{
	return p;
}
void calc::calculate(Base &b,Power &p)
{
	int i,tp,tb;
	int ans = 1;
	tp = p.getp();
	tb = b.getb();
	for(i=1;i<=tp;i++)
	{
		ans = ans * tb;
	}
	cout<<"\nAns = "<<ans;
}

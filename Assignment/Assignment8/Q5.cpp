/*5.
	class Base
	{
		private:
			int b;
		public;
			//You can add your own member functions
	};
	class Power
	{
		private:
			int p;
		public:
			//You can add your own member functions
	};
	int main()
	{
		Base base,power;
		//Calculate base^power in independannt function calc().
		//Print result in main().
		//Do not use friend function.
	}*/
#include<iostream>
using namespace std;

class Base
{
	private:
		int b;
	public:
		int getb();
		void scanb();
};

class Power
{
	private:
		int p;
	public:
	void scanp();
	int getp();	
};
void calc(Power power,Base base);
int main()
{
	Base base;
	Power power;
	base.scanb();
	power.scanp();
	calc(power,base);
	return 0;
}

void Base::scanb()
{
	cout<<"\nEnter the base = ";
	cin>>b;
}

void Power::scanp()
{
	cout<<"\nEnter power = ";
	cin>>p;
}

int Base::getb()
{
	return b;
}

int Power::getp()
{
	return p;
}

void calc(Power power,Base base)
{
	int i;
	int tb,tp;
	int ans=1;
	tp = power.getp();
	tb = base.getb();
	for(i=0;i<tp;i++)
	{
		ans = ans * tb;
	}
	cout<<"\nANs = "<<ans;
}

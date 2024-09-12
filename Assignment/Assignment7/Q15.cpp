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
		Base base;
		Power power;
		//Calculate base^power in independannt function calc().
		//Print result in main().
	}*/

#include<iostream>
using namespace std;

class Base
{
	private:
		int b;
	public:
	    void scanb();
		int getb();	
};

class Power
{
	private:
		int p;
	public:
	    void scanp();
		int getp();	
};
void calc(Base &b,Power &p);
int main()
{
	Base base;
	Power power;
	calc(base,power);
	return 0;
}

void calc(Base &b,Power &p)
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

void Base::scanb()
{
	cout<<"Enter the base  = ";
	cin>>b;
}
int Base::getb()
{
	scanb();
	return b;
}
void Power::scanp()
{
	cout<<"\nEnter the power = ";
	cin>>p;
}
int Power::getp()
{
	scanp();
	return p;
}

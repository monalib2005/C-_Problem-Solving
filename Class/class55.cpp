#include<iostream>
using namespace std;

class Base;
class Power
{
	private:
		int p;
	public:
	    void scan(Base &varbase);
		void calc(Base varbase);	
};

class Base
{
	private:
		int b;
		friend void Power::scan(Base &varbase);
		friend void Power::calc(Base varbase);
};

int main()
{
	Base varbase;
	Power varpower;
	varpower.scan(varbase);
	varpower.calc(varbase);
	return 0;
}

void Power::scan(Base &varbase)
{
	cout<<"\nEnter the power = ";
	cin>>p;
	cout<<"\nEnter the base = ";
	cin>>varbase.b;
}

void Power::calc(Base varbase)
{
	int i;
	int ans = 1;
	for(i=1;i<=p;i++)
	{
		ans = ans * varbase.b;
	}
	cout<<"\nAns = "<<ans;
	
}

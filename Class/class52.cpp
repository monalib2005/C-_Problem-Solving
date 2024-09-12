#include<iostream>
using namespace std;

class Base;
class Power
{
	private:
		int p;
		friend void calc(Power &varp,Base &varb);
};

class Base
{
	private:
		int b;
		friend void calc(Power &varp,Base &varb);
};

int main()
{
	Power varp;
	Base varb;
	calc(varp,varb);
	return 0;
}

void calc(Power &varp,Base &varb)
{
	cout<<"\nEnter the power = ";
	cin>>varp.p;
	cout<<"\nEnter the base = ";
	cin>>varb.b;
	
	int i;
	int ans = 1;
	for(i=1;i<=varp.p;i++)
	{
		ans = ans * varb.b;
	}
	cout<<"\nANs = "<<ans;
}

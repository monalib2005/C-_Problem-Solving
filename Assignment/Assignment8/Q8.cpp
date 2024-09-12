/*3.
	class Base
	{
		int b;
	};
	class Power
	{
		int p;
	};
	void calc(parameter list)
	{
		//calculate base^power here, using objects created in main.
	}
	int main()
	{
		Base base;
		Power power;
	}*/
#include<iostream>
using namespace std;

class Power;
class Base
{
	int b;
	friend void calc(Base base,Power power);
	friend int main();
	
};

class Power
{
	int p;
	friend void calc(Base base,Power power);
	friend int main();
};

void calc(Base base,Power power);
int main()
{
	Base base;
	Power power;
	calc(base,power);
	return 0;
}

void calc(Base base,Power power)
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
	cout<<"\nANs = "<<ans;
}

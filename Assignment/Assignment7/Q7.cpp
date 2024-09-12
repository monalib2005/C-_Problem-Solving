/*7.
	class Base
	{
		private:
			int b;
		public:
			void scanbase();
			int getbase();
	};
	class Power
	{
		private:
			int p;
		public:
			void scanpower();
			int getpower();
	};
	int main()
	{
		Base base;
		Power power;
		calc(base,power);
	}*/
#include<iostream>
using namespace std;

//classes
class Base
{
	private:
		int b;
	public:
		void scanbase();
		int getbase();
};
class Power
{
	private:
		int p;
	public:
		void scanpower();
		int getpower();
};

void calc(Base &base,Power &power);   //don't forget to write the defination of independent function

//main function
int main()
{
	Base base;
	Power power;
	calc(base,power);
	return 0;
}

//Member and non member function defination
void Base::scanbase()
{
	cout<<"\nEnter the base = ";
	cin>>b;
}
void Power::scanpower()
{
	cout<<"\nEnter the power = ";
	cin>>p;
}
int Base::getbase()
{
	return b;
}
int Power::getpower()
{
	return p;
}

void calc(Base &base,Power &power)
{
	int i;
	int ans = 1;
	int tp,tb;
	base.scanbase();
	power.scanpower();
	tb = base.getbase();
	tp = power.getpower();
	for(i=1;i<=tp;i++)
	{
		ans = ans * tb;
	}
	cout<<"\nThe answer = "<<ans;
}


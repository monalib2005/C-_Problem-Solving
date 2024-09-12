/*8.Read carefully and complete the code for mentioned task.
class Power
{
	private:
		int p;
	//no member function
};

class Base
{
	private:
		int b;
	//no member function
};
class Calc
{
	private:
		Power varpower;
		Base varbase;
	public:
		void scandata();
		void printdata();
		void calc();
};
int main()
{
	Calc obj;
	//calculate base raised to power in calc.
	//print result in main().
}*/
#include<iostream>
using namespace std;

class Power
{
	private:
		int p;
	//no member function
	friend class Calc;
};

class Base
{
	private:
		int b;
	//no member function
	friend class Calc;
};
class Calc
{
	private:
		Power varpower;
		Base varbase;
	public:
		void scandata();
		void printdata();
		void calc();
};

int main()
{
	Calc obj;
	obj.scandata();
	obj.printdata();
	obj.calc();
	return 0;
}

void Calc::scandata()
{
	cout<<"\nEnter the value of base = ";
	cin>>varbase.b;
	cout<<"\nENter the value of power  = ";
	cin>>varpower.p;
}
void Calc::printdata()
{
	cout<<"\nBase = "<<varbase.b<<"\nPower = "<<varpower.p;
}
void Calc::calc()
{
	int i;
	int ans = 1;
	for(i=0;i<varpower.p;i++)
	{
		ans = ans * varbase.b;
	}
	cout<<"\nANS = "<<ans;
}

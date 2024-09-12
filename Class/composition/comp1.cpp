#include<iostream>
using namespace std;

class Number
{
	public:
		int n;
};

class Digit
{
	public:
		int d;
		void scan(Number &num1);
};

void Digit::scan(Number &num1)
{
	cout<<"\nENter the number = ";
	cin>>d>>num1.n;
	cout<<d<<" "<<num1.n;
}

int main()
{
	Number num;
	Digit var;
	var.scan(num);
	return 0;
}

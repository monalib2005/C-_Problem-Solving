#include<iostream>
using namespace std;

class Number;
class Digit
{
	private:
		int d;
	public:
		void scan(Number &num);
		void print(Number &num);
};

class Number
{
	private:
		int x,y;
		friend void Digit::scan(Number &num);
		friend void Digit::print(Number &num);
};

int main()
{
	Number num;
	Digit var;
	var.scan(num);
	var.print(num);
	return 0;
}

void Digit::scan(Number &num)
{
	cout<<"\nEnter the number = ";
	cin>>num.x>>num.y;
}

void Digit::print(Number &num)
{
	cout<<"\nThe numbers are = ";
	cout<<num.x<<num.y;
}

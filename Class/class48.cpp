#include<iostream>
using namespace std;

class Number
{
	private:
		int n;
		friend void calc();
};

class Digit
{
	private:
		int d;
		friend void calc();
};
void calc();
int main()
{
	calc();
	return 0;
}

void calc()
{
	Number num;
	Digit var;
	var.d = 5;
	num.n = 7;
	cout<<var.d;
	cout<<num.n;
}

#include<iostream>
using namespace std;

class Number; //forward declaration
class Digit
{
	public:
		int d;
		void scan(Number &num1);
};

class Number
{
	public:
		int n;
		void print(Digit &var1);
};

void Digit::scan(Number &num1)
{
	cout<<"Enter the no.s = ";
	cin>>d>>num1.n;
}

void Number::print(Digit &var1)
{
	cout<<"The values are = ";
	cout<<"\n"<<n<<" "<<var1.d;
}

int main()
{
	Digit var;
	Number num;
	
	var.scan(num);
	num.print(var);
	return 0;
}

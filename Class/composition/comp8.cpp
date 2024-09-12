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
};

class Myclass
{
	public:
		Number num;
		Digit var;
};

int main()
{
	Myclass Temp;
	cout<<"Enter the number = ";
	cin>>Temp.num.n;
	cin>>Temp.var.d;
	cout<<"\nThe numbers are ";
	cout<<"\ndigit = "<<Temp.var.d;
	cout<<"\nnumber = "<<Temp.num.n;
	return 0;
}

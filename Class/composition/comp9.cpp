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
	private:
		Number num;
		Digit var;
	public:
     	void scan();
     	void print();
		
};

int main()
{
	Myclass Temp;
	Temp.scan();
	Temp.print();
	return 0;
}
void Myclass::scan()
{
	cout<<"Enter no.s = ";
	cin>>num.n;
	cin>>var.d;
}

void Myclass::print()
{
	cout<<"\nThe numbers are = ";
	cout<<"\nNumber = "<<num.n;
	cout<<"\nDigit = "<<var.d;
}

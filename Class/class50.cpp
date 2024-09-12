#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

class Digit
{
	public:
		Number scan();
		static void print(Number n1,Number n2);
};

int main()
{
	Number T1,T2;
	Digit temp;
	T1 = temp.scan();
	T2 = temp.scan();
	Digit::print(T1,T2);
	return 0;
}
Number Digit::scan()
{
	cout<<"\nEnter the numbers = ";
	Number temp;
	cin>>temp.x>>temp.y;
	return temp;
}

void Digit::print(Number n1,Number n2)
{
	cout<<"\nThe numbers are = ";
	cout<<n1.x<<" "<<n1.y<<"\n";
	cout<<n2.x<<" "<<n2.y;
}

#include<iostream>
using namespace std;

class Number;
class Digit
{
	public:
		Digit(){};
		Digit(int x);
};

class Number
{
	private:
		int x;
		friend Digit::Digit(int x);
		
};

Digit::Digit(int x)
{
	Number T;
	cout<<"\nIn parametrized";
	cin>>T.x;
	cout<<T.x;
}

int main()
{
	Digit var(4);
	return 0;
}

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
		static void scan(Number &T);
		static void print(Number &num1,Number &num2);
};
Number scan();
int main()
{
	Number T1,T2;
	Digit::scan(T1);
	T2 = scan();
	Digit::print(T1,T2);
	return 0;
}

void Digit::scan(Number &T)
{
	cout<<"\nEnter the number = ";
	cin>>T.n;
}
Number scan()
{
	Number temp;
	cin>>temp.n;
	return temp;
}
void Digit::print(Number &num1,Number &num2)
{
	cout<<"\nThe numbers are = ";
	cout<<num1.n<<"\n";
	cout<<num2.n;
}


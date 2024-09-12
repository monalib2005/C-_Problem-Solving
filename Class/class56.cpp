#include<iostream>
using namespace std;

class Digit
{
	private:
		void show();
	public:
	    void print();	
};

class Number
{
	private:
		int n;
		friend class Digit;
		//friend void Digit::print(); ---> shows the error because it is private
		//friend void Digit::show();
};

int main()
{
	Digit var;
	var.print();
	return 0;
}

void Digit::print()
{
	Number T;
	T.n = 3;
	cout<<T.n;
	show();
}
void Digit::show()
{
	Number temp;
	temp.n = 4;
	cout<<temp.n;
}

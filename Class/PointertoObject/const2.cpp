#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y,z;
		void show() const
		{
			cout<<"\nx = "<<x;
			cout<<"\ny = "<<y;
			cout<<"\nz = "<<z;
		}
		void print()
		{
			cout<<"\nx = "<<x;
			cout<<"\ny = "<<y;
		}
};

int main()
{
	const Number var = {5,6};
	//var.print();   --->This is calling non constant member function by constant object
	var.show
	();
	return 0;
}

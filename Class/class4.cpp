#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		void show()
		{
			cout<<"\n In show()";
		}
};
class Digit
{
	public:
		int d;
		void print()
		{
			cout<<"\n In print().";
		}
};

int main()
{
	Number Temp;
	Digit var;
	
	//Temp.d=10; // this will show error
	//var.show();  //this will show error
	
	Temp.x = 5;
	Temp.show();
}

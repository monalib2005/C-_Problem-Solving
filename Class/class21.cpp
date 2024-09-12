#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		
		void show()
		{
			cout<<"\nIn show()";
		}
};
class Digit
{
	public:
		int d;
		
		void print()
		{
			cout<<"\nIn print()";
		}
};

int main()
{
	Number Temp;
	Digit var;
	
//	Temp.d=10; 
//	var.show();  this statements will give error
	Temp.x=5;
	Temp.show();
	return 0;
}

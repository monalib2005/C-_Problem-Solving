#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		int y;
		
		void show()
		{
			Number var;
			var.x = 12;
			var.y = 13;
			print();
			var.print();
		}
		void print()
		{
			cout<<"\n"<<x<<y<<"\n";
		}
};

int main()
{
	Number d1;
	d1.x = 10;
	d1.y = 5;
	d1.show();	
	return 0;
}

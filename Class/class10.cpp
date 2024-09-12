#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		int y;
		
		void show()
		{
			print();
		}
		
		void print()
		{
			cout<<x<<"\n"<<y;
		}
};

int main()
{
	Number d1;
	d1.x = 5;
	d1.y = 7;
	d1.show();	
	return 0;
}

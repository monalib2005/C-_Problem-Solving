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
			
			cout<<x<<"\n"<<y<<"\n";
			cout<<var.x<<"\n"<<var.y;
		}
};

int main()
{
	Number d1;
	d1.x = 5;
	d1.y = 10;
	d1.show();
	
	return 0;
}

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

int main()
{
	Number d1;
	d1.x = 5;
	d1.y = 6;
	
	Number &var = d1;
	cout<<var.x<<var.y<<"\n";
	var.x = 9;
	var.y = 13;
	cout<<d1.x<<d1.y<<"\n";
	return 0;
}

#include<iostream>
using namespace std;

class Demo
{
	public:
		int x,y;
};

class Number
{
	public:
		Demo obj;
		int n;
};

int main()
{
	Number var;
	var.obj.x = 5;
	var.obj.y = 9;
	var.n = 7;
	cout<<var.obj.x;
	cout<<var.obj.y;
	cout<<var.n;
	return 0;
}

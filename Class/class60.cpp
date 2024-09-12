#include<iostream>
using namespace std;

class Demo
{
	public:
		int x,y;
		void show(Demo Temp)
		{
			x=x+1;
			y=y+2;
			Temp.x = Temp.x + 1;
			Temp.y = Temp.y + 1;
			Temp.print();
		}
		void print()
		{
			cout<<"\nx = "<<x<<"  "<<"y = "<<y;
		}
};

int main()
{
	Demo var;
	var.x = 5;
	var.y = 2;
	var.show(var);
	return 0;
}

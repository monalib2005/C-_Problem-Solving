#include<iostream>
using namespace std;

class Demo
{
	public:
		int x;
		void show(Demo &Temp)
		{
			Temp.x = x + 1;
			print(Temp);
		}
		void print(Demo var)
		{
			x = var.x + 1;
		}
};

int main()
{
	Demo var;
	var.x = 5;
	var.show(var);
	cout<<var.x;
	return 0;
}

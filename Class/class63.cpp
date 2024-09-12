#include<iostream>
using namespace std;

class Demo
{
	public:
		int y;
		static int x;
	public:
	    static void show(Demo &var)
		{
			var.print();
		}
		void print()
		{
			x++;
			y++;
		}	
};
int Demo::x = 1;
int main()
{
	Demo var;
	Demo::show(var);
	var.print();
	cout<<var.x<<"  "<<var.y;
	return 0;
}

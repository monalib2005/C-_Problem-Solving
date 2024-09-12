#include<iostream>
using namespace std;

class Demo
{
	public:
		static int x;
		
		static void show()
		{
			x = x+1;
		}
		void print()
		{
			cout<<"x = "<<x;
		}
};
int Demo::x = 1;
int main()
{
	Demo var;
	Demo::show();
	var.print();
	return 0;
}

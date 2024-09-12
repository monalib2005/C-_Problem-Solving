#include<iostream>
using namespace std;

class Demo
{
	private:
		static int x;
		int y;
};
int Demo::x = 1;

int main()
{
	cout<<sizeof(Demo)<<endl;
	Demo var;
	cout<<sizeof(var)<<endl;
	return 0;
}

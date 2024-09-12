#include<iostream>
using namespace std;

class Number
{
	public:
		int a;
		float b;
		Number(int x,int y)
		{
			a=x;
			b=y;
		}
};

int main()
{
	Number T1(2,5);
	cout<<T1.a<<"  "<<T1.b;
	return 0;
}

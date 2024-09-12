#include<iostream>
using namespace std;

class Digit
{
	public:
		int x,y;
		Digit(int a,int b)
		{
			x = a;
			y = b;
		}
		Digit(Digit &Temp)
		{
			x = Temp.x + 3;
			y = Temp.y + 6;
		}
};

int main()
{
	Digit T1(2,4);
	Digit T2(T1);
	cout<<T2.x<<"  "<<T2.y;
	return 0;
}

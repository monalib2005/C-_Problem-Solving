#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		Number()
		{
			x = 0;
			y = 0;
		}
		Number(int a,int b)
		{
			x = a;
			y = b;
		}
		Number operator-()
		{
			Number Temp;
			Temp.x = - x;
			Temp.y = -y;
			return Temp;
		}
};

int main()
{
	Number T1(2,5),T2;
	T2 = -T1;
	cout<<"\nT1.x = "<<T1.x<<"   "<<"T1.y = "<<T1.y;
	cout<<"\nT2.x = "<<T2.x<<"   "<<"T2.y = "<<T2.y;
	return 0;
}

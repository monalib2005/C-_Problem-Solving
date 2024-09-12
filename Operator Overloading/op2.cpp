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
		Number operator+(Number temp)
		{
			Number ans;
			ans.x = x + temp.x;
			ans.y = y + temp.y;
			return ans;
		}
		void show()
		{
			cout<<"\nx = "<<x;
			cout<<"\ny = "<<y;
		}
};

int main()
{
	Number T1(2,3),T2(2,5),T3;
	T3 = T1 + T2;
	T3.show();
	return 0;
}

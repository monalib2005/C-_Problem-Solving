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
	Number operator*(Number T)
	{
		Number ans;
		ans.x = x * T.x;
		ans.y = y * T.y;
		return ans;
	}
	Number operator/(Number T)
	{
		Number ans;
		ans.x = x / T.x;
		ans.y = y /T.y;
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
	Number T1(2,3),T2(6,8),T3;
	T3 = T1*T2;
	cout<<"\nMultiplication = ";
	T3.show();
	T3 = T2/T1;
	cout<<"\nDivision = ";
	T3.show();
	return 0;
}

#include<iostream>
using namespace std;

class Number
{
	public:
		int a,b;
		Number()
		{
			a=0;
			b-0;
		}
		Number(int a,int b)
		{
			this->a = a;
			this->b = b;
		}
		Number(Number &Temp)
		{
			a = Temp.a;
			b = Temp.b;
		}
};

int main()
{
	Number T1;
	Number T2(3,7);
	Number T3(T2);
	cout<<T3.a<<" "<<T3.b;
	return 0;
}

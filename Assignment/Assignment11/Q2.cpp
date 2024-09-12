//Q2.WAP to explain copy constructor while passing parameter by value.
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		Number()
		{
			x=0;
			y=0;
		}
		Number(int a,int b)
		{
			x = a;
			y = b;
		}
		Number(Number &temp)  //we take it by refernce to avoid copy constructor as  Number temp = T1
		{
			x = temp.x;
			y = temp.y;
		}
		void show()
		{
			cout<<"\nx = "<<x;
			cout<<"\ny = "<<y;
		}
};
void myfun();
int main()
{
	myfun();
	return 0;
}
void myfun()
{
	Number T;
	Number T1(3,4);
	Number T2(T1);
	T.show();
	T1.show();
	T2.show();
}

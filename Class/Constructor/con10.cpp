#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		Number(int a)
		{
			cout<<"\nparameterized.";
			x = a;
			y = a+2;
		}
		Number(Number &Temp)
		{
			cout<<"\nIn copy.";
			x = Temp.x;
			y = Temp.y;
		}
};
void myfun(Number T);
int main()
{
	Number var(5);
	myfun(var);
	return 0;
}
void myfun(Number T)
{
	cout<<T.x<<"  "<<T.y;
	
}

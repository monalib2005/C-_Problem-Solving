#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		Number()
		{
			cout<<"\nIn default";
			x=0;
			y=0;
		}
		Number(int a,int b)
		{
			cout<<"\nIn parametrized";
			x=a;
			y=b;
		}
		static void show()
		{
			Number Temp;
			Number T2(5,6);
			cout<<endl<<Temp.x<<"  "<<Temp.y;
			cout<<endl<<T2.x<<"  "<<T2.y;
		}
		friend int main();
};

int main()
{
	Number T;
	Number T1(3,4);
	Number::show();
	return 0;
}

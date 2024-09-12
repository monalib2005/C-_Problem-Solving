#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		Number()
		{
			cout<<"\nIn constructor";
			x=0;
			y=0;
		}
		Number(int a,int b)
		{
			cout<<"\nIn parameterized";
			x=a;
			y=b;
		}
};

int main()
{
	Number var[3];
	int i;
	for(i=0;i<=2;i++)
	{
		cout<<var[i].x;
		cout<<var[i].y;
	}
	return 0;
}

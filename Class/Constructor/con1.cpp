#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		Number()
		{
			cout<<"In default";
			x=0;
			y=0;
		}
		Number(int a,int b)
		{
			x=a;
			y=b;
			cout<<"\nIn parameterized";
		}
};

int main()
{
	Number T1;
	Number T2(2,5);
	return 0;
}

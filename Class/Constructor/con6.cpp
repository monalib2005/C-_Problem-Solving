#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
//		Number(int a)
//		{
//			cout<<"\nOne parameterized";
//		}
		Number(int a,int b)
		{
			cout<<"\ntwo parameterized.";
		}
};

int main()
{
	Number T1(5,2);
	Number T2(3,6);
	return 0;
}

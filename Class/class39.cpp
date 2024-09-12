#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		static int y;
};
int Number::y=5;
int main()
{
	Number T1,T2,T3;
	cout<<T1.y<<"\n";
	cout<<T2.y<<"\n";
	T3.y = 7;
	cout<<T1.y<<T2.y<<"\n";
	cout<<Number::y<<"\n";
	return 0;
}

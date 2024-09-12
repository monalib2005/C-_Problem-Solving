//14.WAP to explain static concept.(Perform some experiments on your own and get familiar with static)

#include<iostream>
using namespace std;

int main()
{
	const int x = 10;
	static const int &y = x; //As we are y referencing to x so the y also declared with const int.
	cout<<x<<y;
	return 0;
}
void myfun()
{
	int x = 7;
	static int &y = x
}

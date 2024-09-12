#include<iostream>
using namespace std;
void myfun(int &b);
int main()
{
	int a = 10;
	myfun(a);
	cout<<a;
	return 0;
}
void myfun(int &b)
{
	b=5;
}

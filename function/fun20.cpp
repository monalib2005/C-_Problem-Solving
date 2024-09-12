#include<iostream>
using namespace std;
void myfun(int a,int b=6,int c=8);
int main()
{
	myfun(2,6,9);
	myfun(2,8);
	myfun(2);
	return 0;
}
void myfun(int a,int b,int c)
{
	cout<<a<<b<<c<<"\n";
}

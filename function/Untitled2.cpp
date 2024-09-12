#include<iostream>
using namespace std;
void addition(int a, int b);
int main()
{
	int a = 5 , b = 7;
	addition(a,b);
	//addition(int a , int b);
	cpout<<a;
}
void addition(int a , int b)
{
	int ans;
	ans = a+b;
	cout<<ans;
	a = 10;
}

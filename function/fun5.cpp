#include<iostream>
using namespace std;
int add(int a , int b);
int square(int a);
int a , b;
int main()
{
	int a , b;
	cout<<"Enter the values of a and b =  ";
	cin>>a>>b;
	int res,sq;
	res = add(a,b);
	sq = square(res);
	cout<<"Square of addition = "<<sq;
}
int add(int a , int b)
{
	int ans;
	ans = a + b;
	return ans;
}
int square(int a)
{
	int squ;
	squ = a * a;
	return squ;
}

#include<iostream>
using namespace std;
int add(int a , int b);
int main()
{
	int result;
	result = add(2,3);
	cout<<result;
}
int add(int a , int b)
{
	int ans;
	ans = a + b;
	return ans;
}

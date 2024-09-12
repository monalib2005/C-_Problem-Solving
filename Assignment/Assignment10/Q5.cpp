/*5.Write a program to find out addition of 2 integers,square of given number.
Define function for each task.Call each function using pointer to function.*/
#include<iostream>
using namespace std;

int add(int x,int y);
int square(int x);
int main()
{
	int num1,num2;
	int (*p) (int x,int y);
	int (*ptr) (int x);
	
	p = &add;
	ptr = &square;
	
	cout<<"\nEnter the number = ";
	cin>>num1>>num2;
	int res = (*p) (num1,num2);
	int ans = (*ptr) (num1);
	
	cout<<"\naddition = "<<res;
	cout<<"\nSquare = "<<ans;
	return 0;
}

int add(int x,int y)
{
	return x+y;
}

int square(int x)
{
	return x*x;
}

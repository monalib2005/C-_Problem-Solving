/*6.Define function to find addition and subtraction of given 2 numbers.
Call addition() from main(),pass address of subtraction() as parameter to addition().
Call subtraction() from main().*/
#include<iostream>
using namespace std;

int addition(int x,int y,int (*p)(int x,int y));
int subtraction(int x,int y);
int main()
{
	int num1,num2;
	cout<<"\nEnter the numbers = ";
	cin>>num1>>num2;
	
	int (*p) (int ,int ,int (*p)(int,int));
	p = &addition;
	
	int res = (*p)(num1,num2,&subtraction);
	cout<<"\nAddition = "<<res;
	return 0;
}

int addition(int x,int y,int (*p)(int x,int y))
{
	int ans = (*p)(x,y);
	cout<<"\nSubtraction = "<<ans;
	return x+y;
}
int subtraction(int x,int y)
{
	return x-y;
}

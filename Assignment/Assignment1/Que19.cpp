#include<iostream>
using namespace std;
//Q19.Scan 3 integers from user.Find the smallest of those 3 integers.
int main()
{
	int num1,num2,num3;
	cout<<"\nEnter three numbers = ";
	cin>>num1>>num2>>num3;
	
	if(num1<num2 && num1<num3)
	{
		cout<<num1<<" is the smallest integer.";
	}
	else if(num2<num1 &&num2<num3)
	{
		cout<<num2<<" is the smallest integer.";
	}
	else
	{
		cout<<num3<<" is the smallest integer.";
	}
	return 0;
}

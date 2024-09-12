//4.Scan 10 integers from user and print their addition.

#include<iostream>
using namespace std;

int main()
{
	int num[10];
	cout<<"Enter 10 values = ";
	for(int i=0;i<=9;i++)
	{
		cin>>num[i];
	}
	
	int sum=0;
	for(int i=0;i<=9;i++)
	{
		sum = sum + num[i];
	}
	cout<<"Sum = "<<sum;
	return 0;
}

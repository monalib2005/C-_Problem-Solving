#include<iostream>
using namespace std;

int main()
{
	int a[8];
	cout<<"Enter 8 values of array = ";
	for(int i=0;i<=7;i++)
	{
		cin>>a[i];
	}
	int sum=0;
	for(int j=0;j<=7;j++)
	{
		if(a[j] % 2==0)
		{
			sum = sum + a[j];
		}
	}
	cout<<"sum = "<<sum;
}

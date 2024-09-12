//17.Scan array of 6 integers from user in main().Copy this array in 
//another array in reverse order.

#include <iostream>
using namespace std;

int main()
{
	int num1[6];
	cout<<"Enter six values of array = ";
	for(int i=0;i<=5;i++)
	{
		cin>>num1[i];
	}
	int num2[6];
	for(int i=5;i>=0;i--)
	{
		for(int j=0;j<=5;j++)
		{
			num2[j] = num1[i];
		}
	}
	
	for(int k=0;k<=5;k++)
	{
		cout<<num2[k];
	}
	return 0;
}

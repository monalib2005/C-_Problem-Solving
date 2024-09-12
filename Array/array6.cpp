#include<iostream>
using namespace std;

int main()
{
    int num[8];
	cout<<"Enter 8 values of array = ";
	for(int i=0;i<=7;i++)
	{
		cin>>num[i];
	}
	int sum = 0;
	for(int j=0;j<=7;j++)
	{
		if(num[j] % 2 ==0)
		{
			sum = sum + num[j];
		}
	}
	cout<<"sum";
	return 0;	
}

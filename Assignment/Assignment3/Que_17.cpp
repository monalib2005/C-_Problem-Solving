//Q17.Scan array of n integers.Find the minimum value in array.

#include<iostream>
using namespace std;

int main()
{
	int n,i;
	int *p;
	int min = 1000000000;
	cout<<"\nEnter the value of n = ";
	cin>>n;
	p = new int[n];
	cout<<"\nEnter the values of array = ";
	for(i = 0;i<=n-1;i++)
	{
		cin>>*(p+i);
	}
	for(i = 0;i<=n-1;i++)
	{
		if(*(p+i)<min)
		{
			min = *(p+i);
		}
	}
	cout<<"\nThe minimum number is = "<<min;
	
	return 0;
}

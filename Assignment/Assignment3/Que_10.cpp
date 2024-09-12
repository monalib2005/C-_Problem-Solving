//Q10.Scan a range from user.Print addition of only even values in the range.
#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	int *p;
	
	cout<<"Enter the range of array = ";
	cin>>n;
	p = new int[n];
	cout<<"Enter the values = ";
	for(int i=0;i<=n-1;i++)
	{
		cin>>*(p+i);
	}
	for(int i = 0;i<=n-1;i++)
	{
		if(*(p+i) % 2 == 0)
		{
			sum += *(p+i);
		}
	}
	cout<<"Sum of evens = "<<sum;
	return 0;
}

/*Q18.Scan array of n integers from user.While scaning data,make sure that every number must be positive.
Do not accept value if user enters negative value.
Print addition of all integers.*/

#include<iostream>
using namespace std;

int main()
{
	int n,i;
	int sum = 0;
	int *p;
	cout<<"\nEnter the range of array = ";
	cin>>n;
	p = new int[5];
	
	cout<<"\nEnter the value sof array - ";
	for(i = 0;i<=n-1;i++)
	{
		int num;
		cin>>num;
		while( num<=0)
		{
			cout<<"Enter the positive value = ";
			cin>>num;
		}
		
		*(p+i) = num;	
	}
	for(i = 0;i<=n-1;i++)
	{
		sum += *(p+i);
	}
	cout<<"\nSUm = "<<sum;
	return 0;
}

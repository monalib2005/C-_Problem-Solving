//Q14.Scan n integers from user.Print addition of only even numbers out of n integers.

#include<iostream>
using namespace std;

int main()
{
	int n,i;
	int sum = 0;
	int *p;
	cout<<"\nEnter the value of n = ";
	cin>>n;
	p = new int[n];
	cout<<"\nenter the values of the array = ";
    for(i = 0;i<=n-1;i++)
	{
		cin>>*(p+i);
	}
	for(i = 0;i<=n-1;i++)
	{
	    if(*(p+i) % 2 == 0)
		{
			sum += *(p+i);
		}
	}
	cout<<"\nsum of the even numbers is "<<sum;	  
	return 0;
}

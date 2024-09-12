/*Scan an array of n integers from user.Scan a number from user.
If you find that number,delete it from array.
e.g.
16,42,37,6,42,3,89
If user enters 37 to delete,array will be as follows after deletion
16,42,6,42,3,89,0*/
#include<iostream>
using namespace std;

int main()
{
	int n,i;
	int *p;
	cout<<"\nEnter the value of n  = ";
	cin>>n;
	p = new int[n];
	cout<<"\nEnter the values of array = ";
	for(i=0;i<=n-1;i++)
	{
		cin>>*(p+i);
	}
	int num;
	cout<<"\nENter the number you want to delete = ";
	cin>>num;
	for(i=0;i<=n-1;i++)
	{
		if(*(p+i)==num)
		{
			delete [] (p+i);
		}
	}
	cout<<"\nThe final array = ";
	for(i=0;i<=n-1;i++)
	{
		cout<<*(p+i);
	}
	
	return 0;
}

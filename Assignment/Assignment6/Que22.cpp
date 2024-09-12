/*6.Scan an array of n integers from user.Copy it in another array.
Define functions to scan,copy and print array.Read notebook to check how to
pass array to function.*/
#include<iostream>
using namespace std;
void scan(int *ptr,int n);
void copy(int *ptr1,int *ptr2,int n);
void print(int *ptr1,int *ptr2,int n);
int main()
{
	int n;
	int *p;
	int *q;
	cout<<"\nEnter the value of n = ";
	cin>>n;
	p = new int[n];
	q = new int[n];
	scan(p,n);
	copy(p,q,n);
	print(p,q,n);
	return 0;
}
void scan(int *ptr,int n)
{
	cout<<"\nEnter the values = ";
	int i;
	for(i=0;i<=n-1;i++)
	{
		cin>>*(ptr+i);
	}
}
void copy(int *ptr1,int *ptr2,int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		*(ptr2 + i) = *(ptr1 + i);
	}
}
void print(int *ptr1,int *ptr2,int n)
{
	int i;
	cout<<"\nThe previous array = ";
	for(i=0;i<=n-1;i++)
	{
		cout<<*(ptr1+i);
	}
	cout<<"\nThe copied array = ";
	for(i=0;i<=n-1;i++)
	{
		cout<<*(ptr2+i);
	}
}

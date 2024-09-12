/*14.WAP to copy one array into another array.Print both arrays. 
Define function for each task.We have seen how to pass array to function.
Please refer notebook.*/
#include<iostream>
using namespace std;
void copy(int *ptr1,int *ptr2,int n);
void print(int *ptr1,int *ptr2,int n);
void scan(int *ptr1,int n);
int main()
{
	int num[5];
	int num1[5];
	int *p;
	int *q;
	p = &num[0];
	q = &num1[0];
	scan(p,5);
	copy(p,q,5);
	print(p,q,5);
	return 0;
}
void scan(int *ptr1,int n)
{
	cout<<"\nEnter the values of array = ";
	int i;
	for(i=0;i<=n-1;i++)
	{
		cin>>*(ptr1 + i);
	}
}
void copy(int *ptr1,int *ptr2,int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		*(ptr2 + i) = *(ptr1+i);
	}
}
void print(int *ptr1,int *ptr2,int n)
{
	cout<<"\nThe array is = ";
	int i;
	for(i=0;i<=4;i++)
	{
		cout<<*(ptr1 + i);
	}
	cout<<"\nCopied array = ";
	for(i=0;i<=4;i++)
	{
		cout<<*(ptr2 + i);
	}
}

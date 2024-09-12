/*1.Declare and initialize 2 arrays.One is of 6 integers and another is of 8 integers.
Define only one function sum() to find addition of all elements of array.
Print both additions back in main().sum() will find addition of elements of only
one array at a time.8*/

#include<iostream>
using namespace std;
int Sum(int *ptr,int n);
int main()
{
	int num1[6] = {12,98,45,67};
	int num2[8] = {6,8,2,34,78,27,1,56};
	int *q;
	int *n;
	int sum1,sum2;
	q = &num1[0];
	n = &num2[0];
	sum1 = Sum(q,6);
	sum2 = Sum(n,8);
	cout<<"\nSum of 1st array = "<<sum1;
	cout<<"\nSum of 2nd array = "<<sum2;
	return 0;
}
int Sum(int *ptr,int n)
{
	int i;
	int sum = 0;
    for(i=0;i<=n-1;i++)
	{
		sum = sum + *(ptr + i);
	}
	return sum;
}

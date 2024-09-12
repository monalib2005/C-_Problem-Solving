/*2.Declare an array of 6 integers.Define function scanarray(),printarray() and findmax().
scanarray() - will scan all elements of array.
printarray() - will print all elements of array.
findmax() - will find maximum value from array.*/

#include<iostream>
using namespace std;
void scanarray(int *ptr,int n);
void printarray(int *ptr,int n);
void findmax(int *ptr,int n);
int main()
{
    int num[6];
    int *p;
    p = &num[0];
    scanarray(p,6);
    printarray(p,6);
    findmax(p,6);
	return 0;
}
void scanarray(int *ptr,int n)
{
	cout<<"\nEnter the numbers = ";
	int i;
	for(i=0;i<=n-1;i++)
	{
		cin>>*(ptr+i);
	}
}
void printarray(int *ptr,int n)
{
	cout<<"\nThe values are = ";
	int i;
	for(i=0;i<=n-1;i++)
	{
		cout<<*(ptr+i);
	}
}
void findmax(int *ptr,int n)
{
	int i;
	int max = -1;
	for(i=0;i<=n-1;i++)
	{
		if(*(ptr+i)>max)
		{
			max = *(ptr+i);
		}
	}
	cout<<"\nMaximum = "<<max;
}

/*13.Create array of 5 integers at runtime in create() function.Return its base address in main() function.
Pass it to scan() function to scan data.Then pass it to print() function to print data.
Everything is in your notebook.Please refer.*/
#include<iostream>
using namespace std;
int* create(int n);
void scan(int *ptr , int n);
void print(int *ptr,int n);
int main()
{
	int *q;
	q=create(5);
	scan(q,5);
	print(q,5);
	return 0;
}

int* create(int n)
{
	int *p;
	p = new int[n];
	return p;
}
void scan(int *ptr , int n)
{
	cout<<"\nEnter the numbers =";
	int i;
	for(i=0;i<=n-1;i++)
	{
		cin>>*(ptr + i);
	}
}
void print(int *ptr,int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		cout<<*(ptr + i);
	}
}

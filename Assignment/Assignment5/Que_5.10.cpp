/*10.Scan array of n integers from user.Print it.
Define function for each task.We have seen how to pass array to function.
Please refer notebook.*/
#include<iostream>
using namespace std;
void scan(int *ptr,int n);
void print(int *ptr,int n);
int main()
{
	int n;
	int *p;
	cout<<"Enter the value of n = ";
	cin>>n;
	p = new int[n];
	scan(p,n);
	print(p,n);
	return 0;
}
void scan(int *ptr,int n)
{
	int i;
	cout<<"Enter the values = ";
	for(i=0;i<=n-1;i++)
	{
		cin>>*(ptr + i);
	}
}
void print(int *ptr,int n)
{
	int i;
	cout<<"the values of arrays are = ";
	for(i=0;i<=n-1;i++)
	{
		cout<<*(ptr+i)<<"\n";
	}
}

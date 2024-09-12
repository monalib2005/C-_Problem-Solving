#include<iostream>
using namespace std;
void scan(int *ptr,int n);
void print(int *ptr,int n);
int main()
{
	int num[4];
	scan(&num[0],4);
	print(&num[0],4);
	return 0;
}
void scan(int *ptr,int n)
{
	cout<<"\nEnter the values of the aray = ";
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

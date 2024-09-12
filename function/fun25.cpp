#include<iostream>
using namespace std;
void scan(int *ptr);
void print(int *ptr);
int main()
{
	int *p;
	p = new int[4];
	scan(p);
	print(p);
	return 0;
}
void scan(int *ptr)
{
	cout<<"\nEnter the values = ";
	int i = 0;
	for(i=0;i<=3;i++)
	{
		cin>>*(ptr+i);
	}
}
void print(int *ptr)
{
	int i;
	for(i=0;i<=3;i++)
	{
		cout<<*(ptr+i)<<"\n";
	}
}

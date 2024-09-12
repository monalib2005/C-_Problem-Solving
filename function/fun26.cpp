#include<iostream>
using namespace std;
void scan(int *ptr);
int add(int *ptr);
int main()
{
	int *p;
	p = new int[5];
	int sum;
	scan(p);
	sum = add(p);
	int add(int *ptr);
	cout<<"\nAddition is = "<<sum;
	return 0;
}

void scan(int *ptr)
{
	cout<<"\nEnter the numbers = ";
	int i;
	for(i=0;i<=4;i++)
	{
		cin>>*(ptr+i);
	}
}
int add(int *ptr)
{
	int i;
	int sum = 0;
	for(i=0;i<=4;i++)
	{
		sum = sum +*(ptr+i);
	}
	return sum;
}

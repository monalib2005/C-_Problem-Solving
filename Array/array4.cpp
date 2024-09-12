//declare and initialize array of 6 integers.
//Replace every occurence of 10 in array by zero.
#include<iostream>
using namespace std;

int main()
{
	int a[6] = {24,10,57,10,10,5};
	int *p;
	p = &a[0];
	for(int i=0;i<=5;i++)
	{
		if(a[i] == 10)
		{
			a[i] = 0;
		}
	}
	for(int j=0;j<=5;j++)
	{
		cout<<"\n"<<a[j];
	}
}

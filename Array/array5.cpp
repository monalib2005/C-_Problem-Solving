//Scan array of 10 integers.
//Count how many times 5 present in array.
#include<iostream>
using namespace std;

int main()
{
	int num[10];
	int *p;
	p = &num[0];
	cout<<"Enter 10 values of integer = ";
	for(int i=0;i<=9;i++)
	{
		cin>>*(p+i);
	}
	int count=0;
	for(int i=0;i<=9;i++)
	{
		if(num[i] == 5)
		{
			count++;
		}
	}
	cout<<"count = 
	"<<count;
}

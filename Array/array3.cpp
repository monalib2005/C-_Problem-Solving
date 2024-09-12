//Declare array of six integers 
//.Scan it using pointer and print the value of six integers
#include<iostream>
using namespace std;

int main()
{
	int num[6];
	int *p;
	p = &num[0];
	cout<<"Enter 6 values of array = ";
	for(int i=0;i<=5;i++)
	{
		cin>>*(p + i);
	}
	for(int j=0;j<=5;j++)
	{
		cout<<"\n"<<*(p+j);
	}
	
}


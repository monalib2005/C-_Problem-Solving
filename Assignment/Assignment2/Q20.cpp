//20.Create an array of 3 integers at runtime.Scan those 3 values from user and print them.

#include<iostream>
using namespace std;

int main()
{
	int num[3];
	cout<<"Enter the 3 values of array = ";
	for(int i=0;i<=2;i++)
	{
		cin>>num[i];
	}
	
	for(int i=0;i<=2;i++)
	{
		cout<<"\n"<<num[i];
	}
	
	return 0;
}

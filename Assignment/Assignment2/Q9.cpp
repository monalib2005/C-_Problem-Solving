//9.Scan arry of 6 integers from user.Print addition of all elements in array.

#include<iostream>
using namespace std;

int main()
{
	int num[6];
	cout<<"Enter 6 values of array = ";
	for(int i=0;i<=5;i++)
	{
		cin>>num[i];
	}
	
	int sum = 0;
	for(int i=0;i<=5;i++)
	{
		sum = sum +num[i];
	}
	cout<<"sum = "<<sum;
	return 0;
}

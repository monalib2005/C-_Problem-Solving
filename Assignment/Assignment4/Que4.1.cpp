//1.Scan array of 10 integers.Copy it in another array.
//Print both arrays.
#include<iostream>
using namespace std;


int main()
{
	int i;
    int num[10];
	int num1[10];
	cout<<"Enter the values of number in array = ";
	for(i = 0;i<=9;i++)
	{
		cin>>num[i];
	}
	for(i=0;i<=9;i++)
	{
		num1[i]=num[i];
	}
	cout<<"The array is given as = ";
	for(i = 0;i<=9;i++)
	{
		cout<<num1[i]<<"\n";
	}	
}

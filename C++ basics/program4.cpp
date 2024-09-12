#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"\nEnter a number = ";
	cin>>num;
	
	if(num%3==0 || num%5==0)
	{
		cout<<"correct input";
	}
	else
	{
		cout<<"Wrong input";
	}
}


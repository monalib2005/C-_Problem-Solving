#include<iostream>
using namespace std;
//Q5.Scan a number from user.Check if it is even or odd.
int main()
{
	int num;
	cout<<"\nEnter a number =  ";
	cin>>num;
	
	if(num % 2 == 0)
	{
		cout<<"\nNumber is even";
	}
	else
	{
		cout<<"\nNumber is odd."
	}
	return 0;
}

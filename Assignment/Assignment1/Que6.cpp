#include<iostream>
using namespace std;
//Q6.Scan a number from user.Check if it is multiple of 6 or not without using 6.
int main()
{
	int six,num;
	cout<<"\nEnter the number = ";
	cin>>num;
	
	six = 3*2;
	num % six ==0 ? cout<<"\nIt is multiple of 6." : cout<<"\nIt is not multiple of 6.";
	return 0;
}

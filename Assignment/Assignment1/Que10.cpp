#include<iostream>
using namespace std;
//Q10.Scan a character from user.Check if it is digit or not.
int main()
{
	char ch;
	cout<<"\nEnter a character = ";
	cin>>ch;
	
	if(ch >='0' && ch<='9')
	{
		cout<<"\nIt is digit.";
	}
	else
	{
		cout<<"\nIt is not digit.";
	}
	return 0;
}

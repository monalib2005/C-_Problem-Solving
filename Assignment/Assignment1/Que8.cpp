#include<iostream>
using namespace std;
//Q8.Scan a character from user.Check if it is capital alphabet or not.
int main()
{
	char ch;
	cout<<"\nEnter a chracter = ";
	cin>>ch;
	
	if(ch>='A' && ch<='Z')
	{
		cout<<"\nIt is capital alphabet.";
	}
	else
	{
		cout<<"\nIt is not capital alphabet.";
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\nEnter a character = ";
	cin>>ch;
	
	if(ch>='A' && ch<='Z')
	{
		cout<<"\nIt is in uppercase.";
	} 
	else if(ch>='a' && ch<='z')
	{
		cout<<"\nIt is in lowercase.";
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<"\nIt is digit.";
	}
	else
	{
		cout<<"\nSome other character.";
	}
	return 0;
}

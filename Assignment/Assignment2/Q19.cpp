//19.Scan a character from user.Check if that character is uppercase or lowercase alphabet.

#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter alphabet = ";
	cin>>ch;
	
	if(ch>='A' && ch<='Z')
	{
		cout<<"It is Uppercase.";
	}
	else if(ch>='a' && ch<='z')
	{
		cout<<"It is lowercase.";
	}
	else
	{
		cout<<"This is not alphabet.";
	}
	
	return 0;
}

//9.Scan a character from user.Define function check() to check if it is uppercase alphabet,lowercase alphabet or 
//a digit.

#include<iostream>
using namespace std;
void check(char ch);
int main()
{
	char chara;
	cout<<"Enter the character = ";
	cin>>chara;
	check(chara);
	return 0;
}
void check(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		cout<<"It is uppercase alphabet.";
	}
	else if(ch>='a' && ch<='z')
	{
		cout<<"It is lowercase alphabet.";
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<"It is a digit.";
	}
	else
	{
		cout<<"Wrong input";
	}
	
}

/*10.Scan a character from user.Define function change() to change this character to uppercase if it is in lowercase.
Function returntype should be void.*/
#include<iostream>
using namespace std;
void change(char cha);
int main()
{
	char ch;
	cout<<"enter the character = ";
	cin>>ch;
	change(ch);
	return 0;
}
void change(char cha)
{
	if(cha>='a' && cha<='z')
	{
		cha = cha-32;
		cout<<"\nUppercase = "<<cha;
	}
	else
	{
		cout<<"\nWrong input.";
	}
}


//Q2.Scan a character from user.Check if it is capital alphabet or small alphabet.
#include<iostream>
using namespace std;

int main()
{
	char chara;
	cout<<"Enter character = ";
	cin>>chara;
	
	chara>= 'A' && chara<='Z' ? cout<<"It is a captial alphabet." : chara>='a' && chara<='z' ? cout<<"It is a small alphabet." : cout<<"It is not a alphabet.";
	return 0;
}

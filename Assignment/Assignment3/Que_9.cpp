//Q9.Keep scanning a character from user until user enters '?'.Count only alphabets(capital or small) user has entered.
//The loop you have to use is given below.You have to complete the remaining code.
//	while(1)
//	{
//		cin>>ch;
//		if(ch=='?')
//		{
//			break;
//		}
//	}
#include<iostream>
using namespace std;

int main()
{
	char ch;
	int capital=0;
	int small=0;
	
	cout<<"Enter character = ";
	while(1)
	{
		cin>>ch;
		if(ch=='?')
		{
			break;
		}
		if(ch>='A' && ch<='Z')
		{
			capital++;
		}
		else if(ch>='a' && ch<='z')
		{
			small++;
		}
		else
		{
			break;
		}
	}
	cout<<"Capital = "<<capital<<"\n";
	cout<<"Small = "<<small;
	return 0;
}

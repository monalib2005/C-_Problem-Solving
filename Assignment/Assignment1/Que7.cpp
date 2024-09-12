#include<iostream>
using namespace std;
//Scan a character from user.Print "APPLE" if user enters a or A.Otherwise print message
//"NO APPLE".
int main()
{
	char ch;
	cout<<"\nEnter a character = ";
	cin>>ch;
//	if(ch=='a' || ch=='A')
//	{
//		cout<<"\nApple";
//	}
//	else
//	{
//		cout<<"\nNO APPLE";
//	}
	//We can also solve this question without using logical OR (by using if else ladder and by using conditional operator)
//	if(ch=='a')
//	{
//		cout<<"\nAPPLE";
//	}
//	else if(ch=='A')
//	{
//		cout<<"\nAPPLE";
//	}
//	else
//	{
//		cout<<"\nNO APPLE";
//	}
	
    ch=='a' || ch=='A' ? cout<<"APPLE" : cout<<"NO APPLE";
	return 0;
}

/*Q4.
Using inbuilt string data type,scan 2 strings from user.Compare them to check if they
are equal or not.*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	cout<<"\nEnter string1 = ";
	cin>>s1;
	cout<<"\nEnter string2 = ";
	cin>>s2;
	
	if(s1 == s2)
	{
		cout<<"\nStrings are equal.";
	}
	else
	{
		cout<<"\nStrings are not equal.";
	}
	return 0;
}

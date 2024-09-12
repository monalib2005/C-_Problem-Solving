/*1.Scan a string from user.Find length of string.
Using simple [ ] notation.*/
#include<iostream>
using namespace std;

int main()
{
	char str[10];
	cout<<"\nENter the string = ";
	cin.getline(str,10);
	int i=0;
	
	while(str[i]!='\0')
	{
		i++;
	}
	
	cout<<"\nLength of string = "<<i;
	return 0;
}

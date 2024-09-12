//2.Scan 2 strings from user.Check if they are equal or not.
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[20];
	char str2[20];
	cout<<"\nEnter first string = ";
	cin.getline(str1,20);
	cout<<"\nEnter the second string = ";
	cin.getline(str2,20);
	if(strcmp(str1,str2)==0)
	{
		cout<<"\nEqual strings.";
	}
	else
	{
		cout<<"\nNot equal";
	}
	
	return 0;
}

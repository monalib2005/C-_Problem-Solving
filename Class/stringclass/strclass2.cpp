//scan 2 strings and then decide which string will go first in the dictionary
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[20];
	char str2[20];
	cout<<"\nEnter the string = ";
	cin.getline(&str1[0],20);
	cin.getline(&str2[0],20);
	int res = strcmp(&str1[0],&str2[0]);
	if(res==-1)
	{
		cout<<str1<<" will go first in dictionary and then "<<str2;
	}
	else
	{
		cout<<str2<<" will go first and then "<<str1;
	}
	return 0;
}

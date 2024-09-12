//7.Scan 3 strings from user.Find out which one will go first in dictionary.
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[10],str2[10],str3[10];
	cout<<"\nEnter 1st String = ";
	cin.getline(str1,10);
	cout<<"\nENter 2nd string = ";
	cin.getline(str2,10);
	cout<<"\nEnter 3rd string = ";
	cin.getline(str3,10);
	
	if(strcmp(str1,str2)==-1 && strcmp(str1,str3)==-1)
	{
			cout<<"\nstr1 will go first in dictionary.";
	}
	else if(strcmp(str2,str1)==-1 && strcmp(str2,str3)==-1)
	{
		cout<<"\nstr2 will go first in dicitonary.";
	}
	else
	{
		cout<<"\nstr3 will go first in dictionary.";
	}
	return 0;
}

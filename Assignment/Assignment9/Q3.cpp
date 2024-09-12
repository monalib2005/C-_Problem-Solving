//3.Scan 3 strings from user in main().Check if user has given "pune" or not.
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[10];
	char str2[10];
	char str3[10];
	cout<<"\nEnter frist string = ";
	cin.getline(str1,10);
	cout<<"\nEnter the second string  = ";
	cin.getline(str2,10);
	cout<<"\nENter the third string = ";
	cin.getline(str3,10);
	
	if(strcmp(str1,"Pune")==0)
	{
		cout<<"string 1 found";
	}
	if(strcmp(str2,"Pune")==0)
	{
		cout<<"\nstring 2 found";
	}
	if(strcmp(str3,"Pune")==0)
	{
		cout<<"\nstring 3 found";
	}
	return 0;
}

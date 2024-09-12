/*Q1.
int main()
{
	char *p,*q;
}
Scan 2 strings from user here and find their length.
Compare them and check if the are equal or not.*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *p,*q;
	p = new char[20];
	q = new char[20];
	
	cout<<"\nEnter string 1 = ";
	cin.getline(p,20);
	
	cout<<"\nEnter string 2 = ";
	cin.getline(q,20);
	
	if(strcmp(p,q) == 0)
	{
		cout<<"\nStrings are equal";
	}
	else
	{
		cout<<"\nString are not equal.";
	}
	return 0;
}

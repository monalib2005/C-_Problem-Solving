/*4.For given main(),scan 2 strings from user and check if they are equal or not.
Draw stackframe in notebook.
Condition = Do not declare your own variables.
	int main()
	{
		char *p,*q;
	}*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *p,*q;
	p = new char[20];
	q = new char[20];
	cout<<"\nEnter the first string = ";
	cin>>p;
	cout<<"\nEnter the second string  = ";
	cin>>q;
	
	if(strcmp(q,p)==0)
	{
		cout<<"\nEqual strings.";
	}
	else
	{
		cout<<"\nNot equal strings.";
	}
	return 0;
}

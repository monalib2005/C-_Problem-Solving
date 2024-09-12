//1.Define your own functions to find length of string and copy one string into another string.
#include<iostream>
using namespace std;
int stringlen(char *p);
void copy(char *p,char *q);
int main()
{
	char str[20];
	char target[20];
	cout<<"\nEnter the string = ";
	cin.getline(str,20);
	int len = stringlen(str);
	cout<<"\nLength = "<<len;
	copy(str,target);
	cout<<"\nThe copied string = "<<target;;
	return 0;
}

int stringlen(char *p)
{
	int i=0;
	while(*(p+i)!='\0')
	{
		i++;
	}
	return i;
}


void copy(char *p,char *q)
{
	int i=0;
	
	while(*(p+i)!='\0')
	{
		*(q+i) = *(p+i);
		i++;
	}
	*(q+i) ='\0';
}

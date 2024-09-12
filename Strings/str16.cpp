//Define your own stringlen() function which returns no. of characters in string excluding '\0'
#include<iostream>
using namespace std;

int stringlen(char *ptr);
int main()
{
	char str[60];
	char *p = &str[0];
	cout<<"\nEnter the string = ";
	cin.getline(p,60);
	int len = stringlen(p);
	cout<<"\nLength = "<<len;
	return 0;
}
int stringlen(char *ptr)
{
	int i = 0;
	while(*(ptr+i)!='\0')
	{
		i++;
	}
    return i;
}

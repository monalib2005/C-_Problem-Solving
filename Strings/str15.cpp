#include<iostream>
using namespace std;

void show(char *ptr);
int main()
{
	char str[10] = "Hello";
	char *p = &str[0];
	show(p);
	cout<<endl<<str;
	return 0;
}

void show(char *ptr)
{
	cout<<*(ptr + 0)<<endl;
	cout<<*(ptr + 1)<<endl;
	cout<<ptr;
	*(ptr + 0) = 'h';
	
	int i = 0;
	while(*(ptr+i)!='\0')
	{
		cout<<*(ptr+i);
		i++;
	}
}

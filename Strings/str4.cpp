#include<iostream>
using namespace std;

int main()
{
	int i;
	char mystr[6] = "Hello";
	for(i=0;i<=4;i++)
	{
		cout<<mystr[i];
	}
	
	int j=0;
	char str[20] = "hello";
	while(str[j]!='\0')
	{
		cout<<str[j];
		j++;
	}
	return 0;
}


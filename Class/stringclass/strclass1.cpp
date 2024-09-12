#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[] = "cat";
	char str2[] = "cam";
	int res = strcmp(&str1[0],str2);
	if(res == 0)
	{
		cout<<"Equal";
	}
	else if (res == 1)
	{
		cout<<"cat is greater than cam";
	}
	else
	{
		cout<<"cam is greater thasn cat";
	}
	return 0;
}

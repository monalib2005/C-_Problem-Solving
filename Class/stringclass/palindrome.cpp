#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	cout<<"\nEnter the string = ";
	cin.getline(str,100);
	int len;
	len = strlen(str);
	int i = 0;
	int j = len-1;
	while(i<=j)
	{
		if(str[i] != str[j])
		{
			break;
		}
		i++;
		j--;
	}
	if(i>j)
	{
		cout<<"\nIt is palindrome.";
	}
	else
	{
		cout<<"\nNo palindrome.";
	}
	return 0;
}

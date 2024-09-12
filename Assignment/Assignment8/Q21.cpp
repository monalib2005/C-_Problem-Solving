//4.Scan a string from user.Check if it is pallindrome or not.
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[20];
	char target[20];
	cout<<"\nEnter the string = ";
	cin.getline(str,20);
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	int length = i;
	int j;
	for(j=0;j<length;j++)
	{
		target[j] = str[length-j-1];
	}
	target[length] = '\0';
	cout<<target;
	
	if(strcmp(target,str)==0)
	{
		cout<<"\nThe string is a palindrome.";
	}
	else
	{
		cout<<"\nIt is not a palindrome.";
	}
	return 0;
}

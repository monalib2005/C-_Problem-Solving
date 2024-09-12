/*5.Scan a string from user.Check how many distinct characters have been used in a string.
input = "hello from java"
output = 11 distinct characters are used.*/
#include<iostream>
using namespace std;

int main()
{
	char str[20] = "hello from java";
	int i,j=0;
	while(str[i]!='\0')
	{
		while(str[j] ==str[i])
		{
			j++;
		}
		i++;
	}
	cout<<i-j;
	return 0;
}

/*25.Scan a string from user and remove extra spaces from string if any.
There must be only one space between two words of a string.
e.g.
input string = "I love   CPP and    JAVA     and   ADS very     much."
output string = "I love CPP and JAVA and ADS very much."*/
#include<iostream>
using namespace std;

int main()
{
	char str[60] = "I love   CPP and    JAVA     and   ADS very     much.";
	char result[60];
	int i,j = 0;
	while(str[i]!='\0')
	{
		if(str[i] == 32)
		{
			result[j++] = str[i];
		}
		else if(j>0 && result[j-1] != ' ')
		{
			result[j++] = ' ';
		}
		
		i++;
	}
	result[i] = '\0';
	cout<<"\nNewstring = "<<result;
	return 0;
}

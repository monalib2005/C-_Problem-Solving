//Scan a string and count number of words and length of string.
#include<iostream>
using namespace std;

int main()
{
	int i,c = 0;
	char str[30];
	cout<<"\nEnter the string = ";
	cin.getline(str,30);
	
	while(str[i]!='\0')
	{
		if(str[i] == 32)
		{
			c++;
		}
		i++;
	}
	cout<<"\nLenght of the string is = "<<i;
	cout<<"\nThe total words in the string is = "<<c+1;
	return 0;
}

/*2.Scan a string from user.Count number of words in string.
using pointer notation(*(p+i))*/
#include<iostream>
using namespace std;

int main()
{
	char str[20];
	cout<<"\nEnter the string = ";
	cin.getline(str,20);
	int i,c = 0;
	
	while(str[i]!='\0')
	{
		if(str[i] == 32)
		{
			c++;
		}
		i++;
	}
	cout<<"\nThe number of words = "<<c+1;
	return 0;
}

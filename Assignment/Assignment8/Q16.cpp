/*4.Scan a string from user.Replace every occurrence of vowel by 'X'.
Print resulting string.
using pointer notation(*(p+i))*/
#include<iostream>
using namespace std;

int main()
{
	char str[20];
	char vowel[5] = {'a','e','i','o','u'};
	char *p;
	p = &str[0];
	cout<<"\nENter the string = ";
	cin.getline(p,20);
	int i=0;
	int j;
	while(*(p+i)!='\0')
	{
		for(j=0;j<=4;j++)
		{
			if(str[i] == vowel[j])
			{
				*(p+i) = 'X';
			}
		}
		i++;
	}
	cout<<"Replaced string = "<<p;
	return 0;
}

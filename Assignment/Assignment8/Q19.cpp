/*2.Define function toCapital() ot converts all lowercase alphabets in uppercase in given string.
input = "KALKI 2829 is good Movie."
output = "KALKI 2829 IS GOOD MOVIE."*/
#include<iostream>
using namespace std;
void toCapital(char *p);
int main()
{
	char str[50] = "KALKI 2829 is good Movie";
	cout<<"\nInitial string = "<<str;
	toCapital(str);
	return 0;
}

void toCapital(char *p)
{
	int i;
	while(*(p+i)!='\0')
	{
		if(*(p+i)>='a' && *(p+i)<='z')
		{
			*(p+i)-=32;
		}
		i++;
	}
	cout<<"\nFinal string = "<<p;
}

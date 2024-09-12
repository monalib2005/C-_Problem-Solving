//scan a string from user and convert every lowercase alphabet into uppercase alphabet
#include<iostream>
using namespace std;

int main()
{
	int i = 0;
	char str[80];
	char *p = &str[0];
	cout<<"\nEnter the string = ";
	cin.getline(str,80);
	
	while(*(p+i)!='\0')
	{
		if(*(p+i)>='a' && *(p+i)<='z')
		{
			*(p+i) = *(p+i) - 32;
		}
		i++;
	}
	cout<<"\nThe converted string = "<<p;
	return 0;
}

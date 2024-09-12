//scan a string from a user and count lowercase alphabet
#include<iostream>
using namespace std;


int main()
{
	int i,c = 0;
	char str[40];
	char *p = &str[0];
	cout<<"\nEnter the string = ";
	cin.getline(p,40);
	
	while(*(p+i)!='\0')
	{
		if(*(p+i)>='a' && *(p+i)<='z')
		{
			c++;
		}
		i++;
	}
	cout<<"\nThe lowercase alphabets ar = "<<c;
	return 0;
}

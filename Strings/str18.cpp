//define function uppercase() which convert given string into uppercase format.
#include<iostream>
using namespace std;

void uppercase(char *p);
int main()
{
	char str[100];
	char *p = &str[0];
	cout<<"\nEnter the string = ";
	cin.getline(p,60);
	uppercase(p);
	return 0;
}

void uppercase(char *p)
{
	int i = 0;
	while(*(p+i)!='\0')
	{
		if(*(p+i)>='a' && *(p+i)<='z')
		{
			*(p+i) = *(p+i) - 32;
			
		}
		i++;
	}
	cout<<"\nThe uppercase string = "<<p;
}

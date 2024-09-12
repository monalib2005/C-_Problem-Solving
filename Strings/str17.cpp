//Define your own function copy you string into another array.
#include<iostream>
using namespace std;

void copy(char *p,char *q);
int main()
{
	char str[60],target[60];
	char *p = &str[0];
	char *q = &target[0];
	cout<<"\nEnter the string = ";
	cin.getline(p,60);
	copy(p,q);
	return 0;
}
void copy(char *p,char *q)
{
	int i = 0;
	while(*(p+i)!='\0')
	{
		*(q+i) = *(p+i);
		i++;
	}
	*(q+i) = '\0';N
	cout<<"\nThe copied string is = "<<q;
}

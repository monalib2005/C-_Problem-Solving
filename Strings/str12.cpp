//scan a string user pointer and print it's length using pointer
#include<iostream>
using namespace std;

int main()
{
	int i=0;
	char str[100];
	char *p;
	p = &str[0];
	cout<<"\nEnter the string = ";
	cin.getline(p,50);
	
	while(*(p+i)!='\0')
	{
		i++;
	}
	cout<<"\nThe length of the string is = "<<i;
	return 0;
}

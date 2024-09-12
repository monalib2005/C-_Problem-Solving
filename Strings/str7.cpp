#include<iostream>
using namespace std;

int main()
{
	int i = 0;
	char str[80];
	cout<<"\nEnter your string = ";
	cin.getline(str,80,'\n');
	while(str[i]!='\0')
	{
		cout<<str[i];
		i++;
	}
	return 0;
}

//copy one string into another string 
#include<iostream>
using namespace std;

int main()
{
	int i = 0;
	char str[60],target[60];
	cout<<"\nENter the string = ";
	cin.getline(str,60);
	
	while(str[i]!='\0')
	{
		target[i] = str[i];
		i++;
	}
	cout<<"\nThe copied string is = "<<target;
	return 0;
}

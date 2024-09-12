//scan a string and count uppercase alphabet
#include<iostream>
using namespace std;

int main()
{
	int i,c=0;
	char str[50];
	cout<<"\nEnter the string = ";
	cin.getline(str,50);
	
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			c++;
		}
		i++;
	}
	cout<<"The total capital alphabelts are = "<<c;
	return 0;
}

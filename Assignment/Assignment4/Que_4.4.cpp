//4.Scan array of 6 characters from user and print them.
//([] notation)
#include<iostream>
using namespace std;

int main()
{
	int i;
	char char1[6];
	cout<<"Enter the character from user = ";
	for(i=0;i<=5;i++)
	{
		cin>>char1[i];
	}
	cout<<"The character array is given as = ";
	for(i=0;i<=5;i++)
	{
		cout<<char1[i]<<"\n";
	}
	return 0;
}

//Scaning a string from user
#include<iostream>
using namespace std;

int main()
{
	char mystr[30];
	cout<<"Enter your string = ";
	cin>>&mystr[0];
	cout<<"This is your string = "<<&mystr[0];
	return 0;
}

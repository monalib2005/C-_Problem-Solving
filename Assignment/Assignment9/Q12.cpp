//Write a program to swap 2 strings.
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[20]="Sakshi";
	char str2[20]="Monali";
    char str[20];
    cout<<"\nInitally strings  = ";
    cout<<"\nstr1 = "<<str1;
    cout<<"\nstr2 = "<<str2;
	strcpy(str,str1);
	strcpy(str1,str2);
	strcpy(str2,str);
	
	cout<<"\nSwapped string  = ";
	cout<<"\nstr1 = "<<str1;
    cout<<"\nstr2 = "<<str2; 
	
	return 0;
}

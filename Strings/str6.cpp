//scanning a character
#include<iostream>
using namespace std;

int main()
{
	char str[6];
	cout<<"\nEnter the string = ";
	cin>>&str[0];  //Here we give input hello world then it prints only hello because it terminates due to space 
	cout<<str;
	
	return 0;
}

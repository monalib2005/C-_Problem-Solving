/*1.For given main() function,scan a string from user and print its length.
Condition = do not declare your own variable.
	int main()
	{
		char * str;
	}*/
#include<iostream>
using namespace std;

int main()
{
	char *str;
	str = new char[20];
	cout<<"Enter string = ";
	cin.getline(str,20);
	cout<<"\nThe string is = ";
	cout<<str;
	return 0;
}	

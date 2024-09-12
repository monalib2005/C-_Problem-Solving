//12.WAP to check working working of enumerations.
//Try everything we have seen in enumeration.

#include<iostream>
using namespace std;


enum color
	{
		Red = 10,
		Green = Red + 2,
		Blue = Red + Green
	};
int main()
{
	cout<<"\n"<<Red;
	cout<<"\n"<<Green + 3;
	cout<<"\n"<<Blue;
	
	
	return 0;
}

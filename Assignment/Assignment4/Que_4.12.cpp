//12.WAP to understand the concept of enumeration.
#include<iostream>
using namespace std;

enum color
{
	Red = 12,
	Blue = Red + 7,
	Green = Red + Blue
};
int main()
{
	cout<<Red<<"\n";
	cout<<Blue<<"\n";
	cout<<Green<<"\n";
	
	return 0;
}

//3.Scan a string from user.Copy it in another string.
#include<iostream>
using namespace std;

int main()
{
	char source[20];
	char target[20];
	cout<<"\nENter string one = ";
	cin.getline(source,20);
	int i=0;
	
	while(source[i]!='\0')
	{
		target[i] = source[i];
		i++;
	}
	cout<<"\nThe copied string = "<<target;
	return 0;
}

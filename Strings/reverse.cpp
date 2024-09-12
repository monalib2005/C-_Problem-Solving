#include<iostream>
using namespace std;

int main()
{
	char str1[] = "sarthak";
	char str2[7];
	cout<<"Given string = "<<str1;
	int i;
	for(i=0;i<=6;i++)
	{
		str2[i] = str1[6-i];
	}
	cout<<"\nreversed string = "<<str2;
	return 0;
}

#include<iostream>
using namespace std;
int change(char *pch);
int main()
{
	char ch;
	cout<<"\nEnter the char = ";
	cin>>ch;
	char res;
	res=change(&ch);
	cout<<res;
	return 0;
}
int change(char *pch)
{
	*pch = *pch + 32;
	return *pch;
}

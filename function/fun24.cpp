#include<iostream>
using namespace std;
char change(char p);
int main()
{
	char ch;
	cout<<"\nentre the chara = ";
	cin>>ch;
	char res;
	res = change(ch);
	cout<<res;
	return 0;
}
char change(char p)
{
	p = p + 32;
	return p;
}

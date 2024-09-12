#include<iostream>
using namespace std;

int main()
{
	char str[100] = "Hello";
	char *p;
	p = &str[0];
	cout<<*(p+0)<<"\n";  //prints H
	cout<<(p+0)<<"\n"; //prints Hello
	cout<<(long long)(p+0)<<"\n"; //prints address
	cout<<p+3<<"\n""";
	cout<<"\nENter the string = ";
	cin>>p+2;
    cout<<p+2;
	return 0;
}

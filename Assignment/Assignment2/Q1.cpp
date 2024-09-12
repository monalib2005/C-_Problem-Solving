//1.Scan 3 integers from user.Find the largest integer using conditional operator.

#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter the three values = ";
	cin>>a>>b>>c;
	
	a>b && a>c ? cout<<a<<" is greatest" : b>c && b>a ? cout<<b<<" is greatest" : c>a && c>b ? cout<<c<<" is greatest" : cout<<"All are equal";
	return 0;
}

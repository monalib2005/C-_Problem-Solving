#include<iostream>
using namespace std;
void input();
void add();
void sub();
int a , b;
int addition,subtract;
int main()
{
     input();
     add();
     sub();
}
void input()
{
	cout<<"Enter the values = ";
	cin>>a>>b;
}
void add()
{
	addition = a + b;
	cout<<addition<<"\n";
}
void sub()
{
	subtract = a - b;
	cout<<subtract;
}

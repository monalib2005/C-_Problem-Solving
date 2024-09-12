#include<iostream>
using namespace std;
void myfun();
int a = 6;
int g = 5;
int main()
{
	int a =7;
	myfun();
	a++;
	cout<<a<<"\n"<<g<<"\n";
	myfun();
	cout<<a<<"\n"<<g<<"\n";
	return 0;
}
void myfun()
{
	g = 10;
	cout<<g<<"\n";
	g++;
	a++;
}

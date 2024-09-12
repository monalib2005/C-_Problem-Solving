#include<iostream>
using namespace std;
int& myfun(int &b);
int main()
{
	int a = 10;
	myfun(a) = 5;
	cout<<a;
	return 0;
}
int& myfun(int &b) //We can not write here b instead of &b bcoz,local variable can't be returned by refernce 
{
	return b;
}


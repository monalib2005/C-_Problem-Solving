#include<iostream>
using namespace std;
void myfun(int *b);
int main()
{
	int a = 10;
	myfun(&a);
	cout<<a<<"\n";
	return 0;
}
void myfun(int *b)
{
	cout<<*b<<"\n";
	*b = 15;
	//b = 15;
}

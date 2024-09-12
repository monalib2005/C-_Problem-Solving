#include<iostream>
using namespace std;

void show()
{
	cout<<"\nIn show()";
}

void disp()
{
	cout<<"\nIn disp()";
}
int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int main()
{
	void (*p)();
	p = &show;
	(*p)();
	p = &disp;
	(*p)();
	
	int (*ptr)(int,int);
	ptr = &add;
	int addans = (*ptr)(10,5);
	ptr = &sub;
	int subans = (*ptr)(10,5);
	cout<<"\nAdd = "<<addans;
	cout<<"\nsub = "<<subans;
	return 0;
}

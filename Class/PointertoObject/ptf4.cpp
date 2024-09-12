#include<iostream>
using namespace std;

void show(void (*p)())
{
	(*p)();
	cout<<"\nIn show()";
}

void disp()
{
	cout<<"\nIn disp()";
}

int main()
{
	void (*ptr)(void(*)());
	ptr = &show;
	(*ptr)(&disp);
	return 0;
}

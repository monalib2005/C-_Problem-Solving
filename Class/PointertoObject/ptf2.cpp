#include<iostream>
using namespace std;

void show()
{
	cout<<"\nIn show()";
}
void myfun(void (*p) ());
int main()
{
	void (*ptr)(void (*)());
	ptr = &myfun;
	myfun(&show);
	(*ptr)(&show);
	return 0;
}
void myfun(void (*p) ())
{
	(*p)();
}

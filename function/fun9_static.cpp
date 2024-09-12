#include<iostream>
using namespace std;
void myfun();
int main()
{
	myfun();
	myfun();
	myfun();
	return 0;
}
void myfun()
{
	int x = 5;
	static int y = 5;
	x++;
	y++;
	cout<<x<<"\n"<<y<<"\n";
}

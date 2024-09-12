#include<iostream>
using namespace std;
void change(int &refa);
int main()
{
	int a = 10;
	cout<<a<<"\n";
	change(a);
	cout<<a;
	return 0;
}
void change(int &refa)
{
	refa = 15;
}

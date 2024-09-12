/*7.WAP to understand working of default arguments.Perform experiments.
Generate errors by violating rules.*/

#include<iostream>
using namespace std;
void print(int x,int y=10);
int main()
{
	int a,b;
	print(a,b);
	return 0;
}
void print(int x,int y)
{
	x = 12;
	cout<<x<<"\n";
	cout<<y;
}

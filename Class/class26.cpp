#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};
void scan(Number &var);
void print(Number var);
int main()
{
	Number T1,T2;
	scan(T1);
	print(T1);
	return 0;
}
void scan(Number &var)
{
	cout<<"\nEnter the no. = ";
	cin>>var.x>>var.y;
}
void print(Number var)
{
	cout<<var.x<<var.y;
}

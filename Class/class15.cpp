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
	Number d1,d2;
	scan(d1);
	print(d1);
	return 0;
}
void scan(Number &var)
{
	cout<<"\nEnter the number = ";
	cin>>var.x>>var.y;
}
void print(Number var)
{
	cout<<var.x<<var.y;
}

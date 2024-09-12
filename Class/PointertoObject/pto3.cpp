#include<iostream>
using namespace std;

class  Number
{
	public:
		int x,y;
};
void scan(Number *ptr);
void print(Number *ptr);
int main()
{
	Number T1,T2;
	scan(&T1);
	print(&T1);
	return 0;
}

void scan(Number *ptr)
{
	cout<<"\nENter the numbers = ";
	cin>>ptr->x>>ptr->y;
}

void print(Number *ptr)
{
	cout<<"\nThe numbers are = ";
	cout<<ptr->x<<" "<<ptr->y;
}

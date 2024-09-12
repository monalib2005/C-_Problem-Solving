#include<iostream>
using namespace std;

class Number
{
	public:
		int *x;
};

int main()
{
	Number var;
	Number *p;
	p = &var;
	
	//allocating memory for the address stored in x;
	p->x = new int (0);
	
	cout<<"\nEnter the number = ";
	//cin>>*var.x --->we can also take input using this
	cin>>*(p->x);
	cout<<"Number = "<<*(p->x);
	cout<<"\nNumber = "<<*var.x;
	return 0;
}

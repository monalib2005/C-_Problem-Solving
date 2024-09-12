#include<iostream>
using namespace std;

class Number
{
	public:
		int *ptr;
};

int main()
{
	Number *p;
	p = new Number();
	p->ptr = new int(0);
	
	cout<<"\nEnter the number = ";
	cin>>*(p->ptr);
	cout<<"\nNumber = "<<*(p->ptr);

	return 0;
}

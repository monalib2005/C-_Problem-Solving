#include<iostream>
using namespace std;

class Number
{
	public:
		int *p,*q;
		Number()
		{
			p = new int(0);
			q = new int(0);
			cout<<"\nEnter number:";
			cin>>*p>>*q;
		}
		~Number()
		{
			cout<<*p<<"  "<<*q;
			delete p;
			delete q;
		}
};

int main()
{
	Number T;
	return 0;
}

#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		Number()
		{
			x=0;
			cout<<"\nIn constructor";
		}
		~Number()
		{
			cout<<"\nIn destructor";
		}
};

int main()
{
	Number *q;
	{
		Number *p;
		p= new Number();
		q=p;
		delete p;
	}
	cout<<q->x;
	cout<<"\nMain ends";
	return 0;
}

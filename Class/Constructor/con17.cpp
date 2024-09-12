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
	{
	Number *p;
	p=new Number();
	delete p;
   } 
   cout<<"\nMain ends";
	return 0;
}

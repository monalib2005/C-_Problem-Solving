#include<iostream>
using namespace std;

class Number
{
	public:
		Number()
		{
			cout<<"\nIn default constructor";
		}
		~Number()
		{
			cout<<"\nIn destructor";
		}
};
void myfun();
int main()
{
	myfun();
	return 0;
}
void myfun()
{
	Number T1;
	{
		Number T2;
	}
}

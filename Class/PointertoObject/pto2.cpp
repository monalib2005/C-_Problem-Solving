#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void scan()
		{
			cout<<"\nEnter the numbers = ";
			cin>>x>>y;
		}
		void show()
		{
			cout<<"\nThe numbers are = ";
			cout<<x<<" "<<y;
		}
};

int main()
{
	Number var;
	Number * p;
	p = &var;
	p->scan();
	p->show();
	return 0;
}

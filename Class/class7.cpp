#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		
		void scan()
		{
			cout<<"\nEnter the no.";
			cin>>x>>y;
		}
		
		void print()
		{
			cout<<x<<"\n"<<y;
		}
};
int main()
{
	Number d1 , d2;
	d1.scan();
	d1.print();
	d2.scan();
	d2.print();	
	return 0;
}

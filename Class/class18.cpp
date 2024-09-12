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
			cout<<x<<" "<<y<<"\n";
		}
		
};

int main()
{
	Number T1,T2;
	T1.scan();
	T1.print();
	T2.scan();
	T2.print();
	return 0;
}

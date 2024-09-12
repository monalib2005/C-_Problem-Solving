#include<iostream>
using namespace std;

class Distance
{
	public:
		int km;
		int mtr;
		
		void scan()
		{
			cout<<"\nEnter km = ";
			cin>>km;
			cout<<"\nEnter meter = ";
			cin>>mtr;
		}
		
		void convert()
		{
			km = km + mtr/1000;
			mtr = mtr%1000;
		}
		void print()
		{
			cout<<km<<'\n'<<mtr<<"\n";
		}
};

int main()
{
	Distance d1,d2;
	d1.scan();
	d1.convert();
	d1.print();
	d2.scan();
	d2.convert();
	d2.print();
	return 0;
}

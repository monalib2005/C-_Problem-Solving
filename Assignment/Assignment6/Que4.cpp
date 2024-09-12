/*Q4.
	class Number
	{
		public:
			int x,y;
			void scandata();
			void printdata();
	}
Scan and print details of 2 objects of class Number.Do not access x and y in non member functions.*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void scandata();
		void printdata();
};

int main()
{
	Number N;
	N.scandata();
	N.printdata();
	return 0;
}
void Number::scandata()
{
	cout<<"\nEnter the values of x and y = ";
	cin>>x>>y;
}
void Number::printdata()
{
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}


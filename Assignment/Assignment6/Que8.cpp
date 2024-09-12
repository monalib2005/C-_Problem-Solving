/*Q8.
	class Number
	{
		private:
			int x,y;
			void scan();
		public:
			void print();
	};
Scan data for 2 objects of Number and print them.
Define all member functions outside the class.*/
#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		void scan();
	public:
	    void print();	
};

int main()
{
	Number num;
	num.print();
	return 0;
}
void Number::scan()
{
	cout<<"\nEnter the values of x and y = ";
	cin>>x>>y;
}

void Number::print()
{
	scan();
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}

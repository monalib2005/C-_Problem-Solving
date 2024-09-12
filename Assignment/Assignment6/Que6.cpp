/*Q6.
	class Number
	{
		private:
			int x,y;
		public:
			void scan();
			void print();
	};
Scan data for 2 objects of class Number.Try to access private members in non member functions
and check response of compiler.Perform experiments.*/
#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
	public:
	void scan();
	void print();	
};

int main()
{
	Number n1,n2;
	//cin>>n1.x;  ---->this will show error because it is private member of class We can,t access it in non member function
	n1.scan();
	n1.print();
	
	n2.scan();
	n2.print();
	return 0;
}
void Number::scan()
{
	cout<<"\nEnter the value of x and y = ";
	cin>>x>>y;
}
void Number::print()
{
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}

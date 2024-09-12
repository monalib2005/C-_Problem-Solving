/*Q1.Complete the following programs for given main() functions.
1.
	class Number	
	{
		public:
			int x,y;
	};
	int main()
	{
		Number T1,T2;
		T1.scan();
		T2.scan();
		T1.print();
		T2.print();
	}*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void scan();
		void print();
};

int main()
{
	Number T1,T2;
	T1.scan();
	T2.scan();
	T1.print();
	T2.print();
	return 0;
}
void Number::scan()
{
	cout<<"\nEnter the number = ";
	cin>>x>>y;
}
void Number::print()
{
	cout<<"\nThe numbers are = ";
	cout<<x<<" "<<y;
}

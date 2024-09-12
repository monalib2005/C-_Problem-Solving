/*Q2.Read each question carefully and complete the code.
1.
	class Number
	{
		private:
			int x,y;
		public:
			void scan();
			void print();
	//Do not add your own memberfunction.
	}
	int main()
	{
		//Scan and print data for 2 objects.
	}*/
#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
	public:
		void scan(); //here we can directly access x and y because this are member function
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
	cout<<"\nEnter the numbers = ";
	cin>>x>>y;
}
void Number::print()
{
	cout<<"\nThe values are = ";
	cout<<x<<" "<<y;
}

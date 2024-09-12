/*2.
	class Number
	{
		private:
			int x,y;
			void scan();
		public:
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
		void scan();
	public:
     	void print();	
};

int main()
{
	Number T1,T2;
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
	scan(); //Here we not use calling object because the calling object of print will be the calling object scan
	cout<<"The numbers are = ";
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}

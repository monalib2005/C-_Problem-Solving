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
	
	Number num1,num2;
	num1.print();
	num2.print();
	return 0;
}

void Number::scan()
{
	cout<<"\nEnter the numbers = ";
	cin>>x>>y;
}
void Number::print()
{
	scan();
	cout<<"\nThe numbers are = ";
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}

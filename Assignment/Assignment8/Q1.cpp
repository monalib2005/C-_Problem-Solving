/*1.
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
	    void scan();
		void print();	
};

int main()
{
	Number num1,num2;
	num1.scan();
	num2.scan();
	
	num1.print();
	num2.print();
	return 0;
}

void Number::scan()
{
	cout<<"Enter the value of  x and y = ";
	cin>>x>>y;
}

void Number::print()
{
	cout<<"\nThe numbers are = ";
	cout<<"\nx= "<<x;
	cout<<"\ny = "<<y;
}

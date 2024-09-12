/*3.
	class Number
	{
		private:
			int x,y;
			void scan();
			void print();
		public:
			static void scanfun(parameter list);
			static void printfun(parameter list);
		//Do not add your own memberfunction.
		//scan x and y in scan() function only
		//print x and y in print() function only.
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
		void print();
	public:
	    static void scanfun(Number &num);
		static void printfun(Number num);	
};

int main()
{
	Number num1,num2;
	Number::scanfun(num1);
	Number::scanfun(num2);
	Number::printfun(num1);
	Number::printfun(num2);
	return 0;
}

void Number::scan()
{
	cout<<"\nENter the numbers = ";
	cin>>x>>y;
}
void Number::print()
{
	cout<<"\nThe numbers are = ";
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}
void Number::scanfun(Number &num)
{
	num.scan();
}
void Number::printfun(Number num)
{
	num.print();
}

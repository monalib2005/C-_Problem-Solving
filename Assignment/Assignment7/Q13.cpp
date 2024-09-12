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
	int x,y;
	void scan();
	void print();
	public:
		static void scanfun(Number &T1,Number &T2);
		static void printfun(Number T1,Number T2);
};

int main()
{
	Number T1,T2;
	Number::scanfun(T1,T2);
	Number::printfun(T1,T2);
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
	cout<<x<<y;
}
void Number::scanfun(Number &T1,Number &T2)
{
	T1.scan();
	T2.scan();
}
void Number::printfun(Number T1,Number T2)
{
	T1.print();
	T2.print();
}

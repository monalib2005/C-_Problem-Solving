/*2.
	class Number
	{
		private:
			int x;
			void scandata();
			void printdata();
		public:
			static void myfun(parameter list);
	};
	int main()
	{
		//Scan and print data of one object of Number.
	}*/
#include<iostream>
using namespace std;

class Number
{
	private:
		int x;
		void scandata();
		void printdata();
	public:
	    static void myfun(Number &num);	
};


int main()
{
	Number obj;
	Number::myfun(obj);
	return 0;
}
void Number::myfun(Number &num)
{
	num.scandata();
	num.printdata();
}
void Number::scandata()
{
	cout<<"\nEnter the number = ";
	cin>>x;
}
void Number::printdata()
{
	cout<<"\nThe numbers is = ";
	cout<<x;
}

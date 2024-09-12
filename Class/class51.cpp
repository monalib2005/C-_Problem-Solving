#include<iostream>
using namespace std;

class Number 
{
	private:
		int x,y;
		void scan()
		{
			cout<<"\nEnter the number =  ";
			cin>>x>>y;
		}
		void print()
		{
			cout<<"\nThe numbers are = ";
			cout<<x<<y;
		}
		static void show()
		{
			cout<<"\nHello";
		}
		friend void myfun();
		
};
void myfun();
int main()
{
	myfun();
	return 0;
}
void myfun()
{
	Number T1,T2;
	T1.scan();
	T2.scan();
	T1.print();
	T2.print();
	Number::show();
}

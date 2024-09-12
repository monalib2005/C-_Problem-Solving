/*Q9.
	class Number
	{
		public:
			static int x;
			static void show();
	};
Assign value to x in main() and print its value in show().
Understand working of static members.Perform some experiments.*/
#include<iostream>
using namespace std;

class Number
{
	public:
		static int x;
		static void show();
};
int Number::x;
int main()
{
	Number::x = 3;
	Number::show();
	return 0;
}
void Number::show()
{
	cout<<"\nx = "<<x;
}

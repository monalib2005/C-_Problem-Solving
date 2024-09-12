#include<iostream>
using namespace std;


class Number
{
	public:
		void show()
		{
			cout<<"\nIn member function show()";
		}
		void print()
		{
			show();
//			::show();
		}
};
void show();
int main()
{
	Number T1;
	T1.print();
	show();
	T1.show();
	return 0;
}
void show()
{
	cout<<"\nIndependent show()";
}

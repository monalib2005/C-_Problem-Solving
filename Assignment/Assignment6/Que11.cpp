/*Q.Complete the code for following main() functions.
Do not change main() function.
class Number has 2 data members,x and y.
First you have to decide if called function is nonstatic member function,
static member function or independant function.

1.
	int main()
	{
		Number T1,T2;
		T1.scan();
		T2.scan();
		T1.print();
		T2.print();
	}*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void scan();
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
	cout<<"\nEnter the value of x and y = ";
	cin>>x>>y;
}

void Number::print()
{
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}

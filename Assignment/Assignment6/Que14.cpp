/*4.
	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		T2.scan();
		T3.add(T1,T2);
		T3.show();
	}
You know how to perform addition.
Addition must be stored inside T3.*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void scan();
	    void add(Number &n1,Number &n2);
	    void show();
};

int main()
{
	Number T1,T2,T3;
	T1.scan();
	T2.scan();
	T3.add(T1,T2);
	T3.show();
	return 0;
}
void Number::scan()
{
	cout<<"\nEnter the values of x and y =";
	cin>>x>>y;
}

void Number::add(Number &n1,Number &n2)
{
	x=n1.x+n2.x;
	y=n1.y+n2.y;
}
void Number::show()
{
	cout<<"\naddition is = ";
	cout<<"\nT3.x = "<<x;
	cout<<"\nT3.y = "<<y;
}

/*6.
	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T1.add(T2,T3);
		T3.show();
	}
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
void scan(Number n1);
int main()
{
	Number T1,T2,T3;
	T1.scan();
	scan(T2);
	T1.add(T2,T3);
	T3.show();
	return 0;
}
void Number::scan()
{
	cout<<"\nEnter the value of x and y = ";
	cin>>x>>y;
}
void scan(Number n1)
{
	cout<<"\nEnter the value of x and y = ";
	cin>>n1.x>>n1.y;
}
void Number::add(Number &n1,Number &n2)
{
	n2.x = n1.x+x;
	n2.y = n1.y+y;
}
void Number::show()
{
	cout<<"\nT3.x = "<<x;
	cout<<"\nT3.y = "<<y;
	
}

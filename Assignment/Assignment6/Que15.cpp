/*5.
	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T3 = add(T1,T2);
		T3.print();
	}
Addition must be stored inside T3.*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void scan();
		void print();
};
void scan(Number &n1);
Number add(Number &n1,Number &n2);
int main()
{
	Number T1,T2,T3;
	T1.scan();
	scan(T2);
	T3 = add(T1,T2);
	T3.print();
	return 0;
}
void Number::scan()
{
	cout<<"Enter the value of x and y =";
	cin>>x>>y;
}
void scan(Number &n1)
{
	cout<<"Enter the value of x and y =";
	cin>>n1.x>>n1.y;
}
Number add(Number &n1,Number &n2)
{
	Number T;
	T.x = n1.x + n2.x;
	T.y = n1.y + n2.y;
	return T;
}
void Number::print()
{
	cout<<"\nT3.x = "<<x;
	cout<<"\nT3.y = "<<y;
}

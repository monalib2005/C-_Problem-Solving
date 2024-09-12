/*6.
	class Number	
	{
		public:
			int x,y;
	};
	int main()
	{
		Number T1,T2;
		scan(T1);
		T2=scan();
		T3.add(T1,T2);
		T3.print();
	}*/

#include<iostream>
using namespace std;
class Number	
{
	public:
		int x,y;
		void add(Number &T1,Number &T2);
		void print();
};
void scan(Number &T);
Number scan();
int main()
{
	Number T1,T2,T3;
	scan(T1);
	T2=scan();
	T3.add(T1,T2);
	T3.print();
	return 0;
}
void scan(Number &T)
{
	cout<<"\nEnter the number = ";
	cin>>T.x>>T.y;
}
Number scan()
{
	Number temp;
	cout<<"\nEnter the number = ";
	cin>>temp.x>>temp.y;
	return temp;
}
void Number::add(Number &T1,Number &T2)
{
	x = T1.x + T2.x;
	y = T1.y + T2.y;
}
void Number::print()
{
	cout<<"\nThe addition given as = ";
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}


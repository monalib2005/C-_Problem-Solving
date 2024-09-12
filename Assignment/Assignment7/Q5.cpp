/*5.
	class Number	
	{
		public:
			int x,y;
	};
	int main()
	{
		Number T1,T2;
		T1.scan();
		T2.scan();
		T3 = T1.add(T1,T2);
		T3.print();
	}*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void scan();
		Number add(Number &n1,Number &n2);
		void print();
};

int main()
{
	Number T1,T2,T3;
	T1.scan();
	T2.scan();
	T3 = T1.add(T1,T2);
	T3.print();
	return 0;
}
void Number::scan()
{
	cout<<"\nEnter the numbers = ";
	cin>>x>>y;
}

Number Number::add(Number &n1,Number &n2)
{
	Number temp;
	//Method 1
	//temp.x = n1.x + n2.x;
	//temp.y = n1.y + n2.y;
	
	//Method 2
	temp.x = x + n2.x;
	temp.y = y + n2.y;
	
	return temp;
}
void Number::print()
{
	cout<<"\nThe additions are = ";
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}

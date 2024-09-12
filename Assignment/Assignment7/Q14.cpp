/*4.
	class Number
	{
		int x,y;
		void addition(parameter list);
		public:
			void scan();
			void print();
			void myfun(parameter list);
		//Do not add your own memberfunction.		
	};
	int main()
	{
		//Perform T3 = T1 + T2 for given class Number.
	}*/

#include<iostream>
using namespace std;
class Number
{
	int x,y;
	void addition(Number &T1,Number &T2);
	public:
		void scan();
		void print();
		void myfun(Number &T1,Number &T2);		
};
int main()
{
	Number T1,T2,T3;
	T1.scan();
	T2.scan();
	T3.myfun(T1,T2);
	T3.print();
	return 0;
}
void Number::scan()
{
	cout<<"\nEnter the number = ";
	cin>>x>>y;
}
void Number::addition(Number &T1,Number &T2)
{
	x = T1.x + T2.x;
	y = T1.y + T2.y;
}
void Number::print()
{
	cout<<"\nThe addition is as follows = ";
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}
void Number::myfun(Number &T1,Number &T2)
{
	addition(T1,T2);
}

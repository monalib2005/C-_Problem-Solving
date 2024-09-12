/*3.
	class Number	
	{
		public:
			int x,y;
	};
	int main()
	{
		Number T1,T2;
		scan(T1);
		scan(T2);
		T1.print();
		print(T2);
	}*/
#include<iostream>
using namespace std;
class Number	
{
	public:
		int x,y;
		void print();
};

void scan(Number &num);
void print(Number num);

int main()
{
	Number T1,T2;
	scan(T1);
	scan(T2);
	T1.print();
	print(T2);
	return 0;
}
void scan(Number &num)
{
	cout<<"\nEnter the number = ";
	cin>>num.x>>num.y;
}
void Number::print()
{
	cout<<"\nThe numbers are = ";
	cout<<x<<" "<<y;
}
void print(Number num)
{
	cout<<"\nThe numbers are = ";
	cout<<num.x<<" "<<num.y;
}

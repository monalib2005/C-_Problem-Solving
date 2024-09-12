/*3.
	int main()
	{
		Number T1,T2;
		T1.scan(T2);
		T1.print(T2);
	}*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void scan(Number &N1);
		void print(Number &N1);
};

int main()
{
	Number T1,T2;
	T1.scan(T2);
	T1.print(T2);
	return 0;
}
void Number::scan(Number &N1)
{
	cout<<"Enter the value of x and y = ";
	cin>>x>>N1.x;
	cin>>y>>N1.y;
}
void Number::print(Number &N1)
{
	cout<<"\nx1 = "<<x;
	cout<<"\nx2 = "<<N1.x;
	cout<<"\ny1 = "<<y;
	cout<<"\ny2 = "<<N1.y;
}

/*8.
	class Number	
	{
		public:
			int x,y;
	};
	int main()
	{
		Number T1,T2;
		Number::scan(T1);
		Number::scan(T2);
		Number::print(T1);
		Number::print(T2);
	}*/

#include<iostream>
using namespace std;

class Number
{
	public:
	    int x,y;
	    static void scan(Number &N);
	    static void print(Number N);
};

int main()
{
	Number T1,T2;
	Number::scan(T1);
	Number::scan(T2);
	Number::print(T1);
	Number::print(T2);
	return 0;
}
void Number::scan(Number &N)
{
	cout<<"\nEnter the number = ";
	cin>>N.x>>N.y;
}
void Number::print(Number N)
{
	cout<<"\nThe numbers are = ";
	cout<<N.x<<" "<<N.y;
}

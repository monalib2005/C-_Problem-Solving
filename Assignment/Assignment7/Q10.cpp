/*10.
	class Number	
	{
		public:
			int x,y;
	};
	class Digit	
	{
	};
	int main()
	{
		Number T1,T2;
		Digit::scan(T1);
		Digit::scan(T2);
		print(T1);
		Digit::print(T2);
	}*/
#include<iostream>
using namespace std;
class Number;
class Digit	
{
	public:
		static void scan(Number &N);
		static void print(Number N);
};
class Number	
{
	public:
		int x,y;
};

void print(Number N);
int main()
{
	Number T1,T2;
	Digit::scan(T1);
	Digit::scan(T2);
	print(T1);
	Digit::print(T2);
	return 0;
}
void Digit::scan(Number &N)
{
	cout<<"\nEnter the number =  ";
	cin>>N.x>>N.y;
}
void print(Number N)
{
	cout<<"\nThe numbers of T1 object = ";
	cout<<N.x<<" "<<N.y;
}
void Digit::print(Number N)
{
	cout<<"\nThe numbers T2 object are = ";
	cout<<N.x<<" "<<N.y;
}

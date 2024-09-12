/*9.
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
		Digit D;
		D.scan(T1);
		D.scan(T2);
		D.print(T1,T2);		
	}*/
#include<iostream>
using namespace std;

class Number	
{
	public:
		int x,y;
};
class Digit	
{
	public:
		void scan(Number &T);
		void print(Number N1,Number N2);
};

int main()
{
	Number T1,T2;
	Digit D;
	D.scan(T1);
	D.scan(T2);
	D.print(T1,T2);
	return 0;
}
void Digit::scan(Number &T)
{
	cout<<"Enter the numbers = ";
	cin>>T.x>>T.y;
}
void Digit::print(Number N1,Number N2)
{
	cout<<"\nThe numbers are = ";
	cout<<"\nT1 = "<<N1.x<<" "<<N1.y;
	cout<<"\nT2 = "<<N2.x<<" "<<N2.y;
}


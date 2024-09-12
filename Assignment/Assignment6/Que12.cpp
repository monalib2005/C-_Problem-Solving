/*2.
	int main()
	{
		Number T1,T2;
		T1 = scan();
		T2 = scan();
		print(T1);
		T2.print();
	}*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		
		void print()
		{
			cout<<"\nx = "<<x;
			cout<<"\ny = "<<y;
		}
};
Number scan();
void print(Number N1);
int main()
{
	Number T1,T2;
	T1 = scan();
	T2 = scan();
	print(T1);
	T2.print();
	return 0;
}
Number scan()
{
	Number N;
	cout<<"\nEnter the values of x and y = ";
	cin>>N.x>>N.y;
	return N;
}

void print(Number N1)
{
	cout<<"\nx = "<<N1.x;
	cout<<"\ny = "<<N1.y;
}

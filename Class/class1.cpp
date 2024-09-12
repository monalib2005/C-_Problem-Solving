#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};
int main()
{
	Number T1,T2,T3;
	cout<<"\nEnter the numbers = ";
	cin>>T1.x>>T1.y;
	cout<<"\nEnterr the second number = ";
	cin>>T2.x>>T2.y;
	T3.x = T1.x + T2.x;
	T3.y = T1.y + T2.y;
	cout<<"\nAddition = ";
	cout<<T3.x<<"\n"<< T3.y;
	return 0;
}

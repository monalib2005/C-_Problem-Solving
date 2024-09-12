#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		static int y;
};

int main()
{
	Number T1,T2,T3;
	T1.x=5;
	T2.x=5;
	T3.x=5;
	
	T1.x++;
	T1.y++;
	cout<<T1.x<<T1.y;
	
	T2.x++;
	T2.y++;
	cout<<T2.x<<T2.y;
	
	T3.x++;
	T3.y++;
	cout<<T3.x<<T3.y;
	return 0;
}

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};
Number scan();
int main()
{
	Number T1,T2;
	T1 = scan();
	T2 = scan();
	return 0;
}
Number scan()
{
	Number temp;
	cin>>temp.x>>temp.y;
	return temp;
}

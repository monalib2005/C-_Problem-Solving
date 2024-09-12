#include<iostream>
using namespace std;
class Number
{
	public:
		int x;
		static int y;
		
		static void show()
		{
			//cout<<x<<"\n";
			cout<<y<<"\n";
			Number temp;
			temp.x = 5;
			cout<<temp.x;
		}
};
int Number::y = 7;
int main()
{
	Number T1,T2;
	Number::show();
	T2.x = 7;
	T2.x = 5;
	T1.show();
	return 0;
}

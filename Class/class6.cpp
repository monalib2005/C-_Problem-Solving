#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		
		void show()
		{
			cout<<x<<y<<"\n";
		}
//		static void print()
//		{
//			cout<<x<<y;
//		}  //this will generate error
};
int main()
{
	Number T1,T2;
	T1.x = 5;
	T1.y = 10;
	T2.x = 9;
	T2.y = 7;
	cout<<T1.x<<T1.y<<"\n";
	cout<<T2.x<<T2.y<<"\n";
	T1.show();
	T2.show();
	return 0;
}

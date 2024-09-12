#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void set(int x,int y)
		{
			this->x = x;
			this->y = y;
		}
		void show()
		{
			cout<<"\nThe numbers are = ";
			cout<<x<<" "<<y<<"\n";
		}
};

int main()
{
	Number T1,T2;
	T1.set(3,5);
	T1.show();
    T2.set(4,8);
    T2.show();
	return 0;
}

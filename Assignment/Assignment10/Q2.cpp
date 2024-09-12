//2.WAP to understand this pointer.
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void show(int x,int y)
		{
		    this->x = x;
			this->y = y;
//			cout<<"\nx = "<<x<<"  "<<"y = "<<y;
		}
		void show()
		{
			cout<<"\nx = "<<x;
			cout<<"\ny = "<<y;
		}
};

int main()
{
	Number T;
	T.show(2,5);
	T.show();
	return 0;
}

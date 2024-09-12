//9.WAP to understand default argument.
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y,z;
		void show(int x=10,int y=2,int z = 8)
		{
			cout<<"\nx = "<<x;
			cout<<"\ny = "<<y;
			cout<<"\nz = "<<z;
		}
};

int main()
{
	Number temp;
	temp.show();
	return 0;
}

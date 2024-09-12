#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void change() const
		{
			Number temp;
			temp.x =  5;
			temp.y = 4;
			//x = 1;
			//y = 2; -->we cannot change the value of x and y
			cout<<x<<" "<<y<<"\n";
			cout<<temp.x<<" "<<temp.y;
		}
};

int main()
{
	Number var;
	var.x = 6;
	var.y = 8;
	var.change();
	cout<<endl<<var.x<<" "<<var.y;
	return 0;
}

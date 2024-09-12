#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void show()
		{
			cout<<"\nx = "<<x<<"  "<<"y = "<<y;
		}
};

int main()
{
	Number obj = {10,20};
	Number var = {1,2};
	cout<<"\nx = "<<obj.x<<" "<<obj.y;
	cout<<"\ny = "<<var.x<<" "<<var.y;
	
	void (Number::*p)() = &Number::show;
	(obj.*p) (); //show() gets called which works for obj
	(var.*p) (); //show() gets called which works for var
	return 0;
}

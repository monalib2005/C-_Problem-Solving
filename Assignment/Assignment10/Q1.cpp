//1.WAP to understand constant objects and constant member functions.
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void show() const
		{
			Number temp;
			temp.x = 5;
			temp.y = 3;
			cout<<"\ntemp.x = "<<temp.x<<"   "<<"temp.y = "<<temp.y;
			//x = 2;
			//y = 4;
			cout<<"\nx = "<<x<<"  "<<"y = "<<y;
		}
};

int main()
{
	Number T;
	cout<<"Using constant function = ";
	T.show();
	cout<<"\nUsing constant object";
	const Number T1 = {2,5};
	T1.show();
	return 0;
}

/*SECTION-3
1.WAP to understand static members of class.*/
#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
	public:
	    static Number input()
		{
			Number temp;
			cout<<"\nEnter number = ";
			cin>>temp.x>>temp.y;
			return temp;
		}
		
		static void display(Number temp)
		{
			cout<<"\nx = "<<temp.x;
			cout<<"\ny = "<<temp.y;
		}
};

int main()
{
	Number T1,T2;
	T1 = Number::input();
	T2 = Number::input();
	Number::display(T1);
	Number::display(T2);
	return 0;
}

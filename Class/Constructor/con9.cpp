#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		Number(int a)
		{
			x = a;
			cout<<"Object "<<x<<" Created"<<endl;
		}
		~Number()
		{
			cout<<"Object "<<x<<" Destroyed"<<endl;
		}
};

int main()
{
	Number T1(1);
	{
		Number T2(2);
		{
			Number T3(3);
		}
		Number T4(4);
	}
	Number T5(5);
	return 0;
}

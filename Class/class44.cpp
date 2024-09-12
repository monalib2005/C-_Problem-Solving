#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
	public:
	    void scan()
		{
			cout<<"Enter the no.s ";
			cin>>x>>y;
		}
		static void show(Number temp)
		{
			//cout<<x<<y; --->gives error
			cout<<temp.x<<temp.y;
		}	
};

int main()
{
	Number T1,T2;
	T1.scan();
	T2.scan();
	T1.show(T2);
	Number::show(T2);
	return 0;
}

#include<iostream>
using namespace std;
class Number
{
	private:
		static int x;
	public:
	    static int y;
			
};
int Number::x = 3;
int Number::y = 5;
int main()
{
	cout<<Number::x;
	cout<<NUmber::y;
	return 0;
}

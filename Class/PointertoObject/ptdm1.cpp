#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

int main()
{
    Number var1,var2;
    var1.x = 3;
    var2.x = 7;
	int Number::*p = &Number::x;
	cout<<"\nvar1.x = "<<var1.x;
	cout<<"\nvar1.x = "<<var1.*p;
	
	cout<<"\nvar2.x = "<<var2.x;
	cout<<"\nvar2.x = "<<var2.*p;
	return 0;
}

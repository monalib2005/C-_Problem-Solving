#include<iostream>
using namespace std;
class Number
{
	public:
	     int x,y;
};
void scan();
int main()
{
	Number t1,t2;
	t1 = scan();
	t2 = scan();
    cout<<t1;
    cout<<t2;
	return 0;
}
void scan()
{
	Number temp;
	cout<<"\nEnter the no. = ";
	cin>>temp.x>>temp.y;
	return 0;
}

/*SECTION-1
For given main() functions,define remaining program.
ind = independant function
mem = member function

1.
class Number
{
	private:
		int x,y;
};
int main()
{
	Number T1,T2;
	cin>>T1>>T2;
	cout<<T1<<T2;
}*/

#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		friend istream& operator>>(istream &din,Number &n);
		friend ostream& operator<<(ostream &dout,Number n);
};
int main()
{
	Number T1,T2;
	cin>>T1>>T2;
	cout<<T1<<T2;
}

istream& operator>>(istream &din,Number &n)
{
	cout<<"\nEnter numbers = ";
	din>>n.x>>n.y;
	return din;
}

ostream& operator<<(ostream &dout,Number n)
{
	cout<<"\nx = "<<n.x<<"  "<<"y = "<<n.y;
}

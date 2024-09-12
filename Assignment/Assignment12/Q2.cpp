/*2.
class Number
{
	private:
		int x,y;
};

int main()
{
	Number T1,T2,T3;
	cin>>T1>>T2;
	T3 = T1 + T2; //ind
	cout<<T3;
	T3 = T1 + T2 * T1; // * using mem
	cout<<T3;
}*/

#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		
		Number()
		{
			x = 0;
			y = 0;
		}
		
		Number operator*(Number N)
		{
			Number Temp;
			Temp.x = x * N.x;
			Temp.y = y * N.y;
			return Temp;
		}
		
		friend istream& operator>>(istream &din,Number &n);
		friend ostream& operator<<(ostream &dout,Number n);
		friend Number operator+(Number N1,Number N2);
		friend int main();
};

int main()
{
	Number T1,T2,T3;
	cin>>T1>>T2;
	T3 = T1 + T2; //ind
	cout<<T3;
	T3 = T1 + T2 * T1; // * using mem
	cout<<T3;
}

istream& operator>>(istream &din,Number &n)
{
	cout<<"\nEnter numbers = ";
	din>>n.x>>n.y;
	return din;
}

ostream& operator<<(ostream &dout,Number n)
{
	cout<<"\nx  ="<<n.x<<"  "<<"y = "<<n.y;
}

Number operator+(Number N1,Number N2)
{
	Number temp;
	temp.x = N1.x + N2.x;
	temp.y = N1.y + N2.y;
	return temp;
}

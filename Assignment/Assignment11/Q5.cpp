/*Q5.Complete the code for following main() function.
class Number
{
	int x,y;
};
int main()
{
	Number T1(3,6),T2(5,9),T3(2,9),T4;
	T4 = ++T1;
	T4.show();
	T4 = T1 - T2 + T3;
	T4.show();
	T4 = ~T3; //bitwise complement.
	T4.show();// will print ~T3.x and ~ T3.y
}*/
#include<iostream>
using namespace std;

class Number
{
	int x,y;
	Number()
	{
		x = 0;
		y = 0;
	}
	Number(int a,int b)
	{
		x = a;
		y = b;
	}
	Number operator++()
	{
		Number ans;
		ans.x++;
		ans.y++;
		return ans;
	}
	Number operator+(Number T)
	{
		Number ans;
		ans.x = x + T.x;
		ans.y = y + T.y;
		return ans;
	}
	Number operator-(Number T)
	{
		Number ans;
		ans.x = x - T.x;
		ans.y = y - T.y;
		return ans;
	}
	void show()
	{
		cout<<"\nx = "<<x;
		cout<<"\ny = "<<y;
	}
	friend int main();
};
int main()
{
	Number T1(3,6),T2(5,9),T3(2,9),T4;
	T4 = ++T1;
	T4.show();
	T4 = T1 - T2 + T3;
	T4.show();
	T4 = ~T3; //bitwise complement.
	T4.show();// will print ~T3.x and ~ T3.y
}

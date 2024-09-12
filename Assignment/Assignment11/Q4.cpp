/*Q4.Complete the code for following main() function.
class Number
{
	int x,y;
};
int main()
{
	Number T1(3,7);
	Number T2;
	T2 = -T1;
	T1.show();// should print 3,7
	T2.show();// should print -3,-7
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
	Number operator-()
	{
		Number ans;
		ans.x = -x;
		ans.y = -y;
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
	Number T1(3,7);
	Number T2;
	T2 = -T1;
	T1.show();// should print 3,7
	T2.show();// should print -3,-7
}

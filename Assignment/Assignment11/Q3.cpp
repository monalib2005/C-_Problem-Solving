/*Q3.Complete the code for following main() function.
class Number
{
	int x,y;
};
int main()
{
	Number T1,T2,T3(1);
	T3 = T1 * T2;
	T3.show();
	T3 = T3 ^ 2; //treat ^ as power operator.
	//It should perform x^2 and y^2; 
	T3.show();
}*/
#include<iostream>
using namespace std;

class Number
{
	public:
	int x,y;
	Number()
	{
		x = 2;
		y = 3;
	}
	Number(int a,int b=4)
	{
		x = a;
		y = b;
	}
	Number operator*(Number temp)
	{
		Number ans;
		ans.x = x * temp.x;
		ans.y = y * temp.y;
		return ans; 
	}
	Number operator^(int a)
	{
		int ansx = 1,ansy = 1;
		Number ans;
		for(int i=1;i<=a;i++)
		{
			ansx = ansx * x;
			ansy = ansy * y;
		}
		ans.x = ansx;
		ans.y = ansy;
		return ans;
	}
	void show()
	{
		cout<<"\nx = "<<x;
		cout<<"\ny = "<<y;
	}
	
};

int main()
{
	Number T1,T2,T3(1);
	T3 = T1 * T2;
	T3.show();
	T3 = T3 ^ 2; //treat ^ as power operator.
	//It should perform x^2 and y^2; 
	T3.show();
}

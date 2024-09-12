/*Q8.Complete the program for following main() function.
Do not use operator overloading.Write code which is necessary to implement
statements written in comment.
int main()
{
	Number T1,T2,T3,T4,T5(0);
	//T5 = T1 + T2;
	T5.show();
	//T5 = T1 + T2 + T3;
	T5.show();
	//T5 = T1+T2*T3;
	T5.show();	
	//T5 = T1+T2+T3+T4;
	T5.show();
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
			y = 2;
		}
		Number(int a,int b=0)
		{
			x = a;
			y = b;
		}
		Number add(Number t)
		{
			Number ans;
			ans.x = x + t.x;
			ans.y = y + t.y;
			return ans;
		}
		Number add(Number t1,Number t2)
		{
			Number ans;
			ans.x = x + t1.x + t2.x;
			ans.y = y + t1.y + t2.y;
			return ans;
		}
		Number mul(Number p)
		{
			Number ans;
			ans.x = x * p.x;
			ans.y = y * p.y;
			return ans;
		}
		void show()
		{
			cout<<"\nx = "<<x;
			cout<<"\n y = "<<y;
		}
};

int main()
{
	Number T1,T2,T3,T4,T5(0);
	//T5 = T1 + T2;
	T5 = T1.add(T2);
	T5.show();
	//T5 = T1 + T2 + T3;
	T5= T5.add(T3);
	T5.show();
	//T5 = T1+T2*T3;
	T5 = T1.add(T2);
	T5 = T5.mul(T3);
	T5.show();	
	//T5 = T1+T2+T3+T4;
	T5 =  T1.add(T2);
	T5 = T5.add(T3,T4);
	T5.show();
}

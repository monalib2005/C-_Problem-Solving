#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		Number add(Number &num)
        {
	        Number T;
	        T.x = x + num.x;
	        T.y = y + num.y;
        	return T;
        }
		void print()
        {
        	cout<<x<<" "<<y<<"\n";
        } 
};
void scan(Number &T);
int main()
{
	Number T1,T2,T3;
	scan(T1);
	scan(T2);
	T3 = T1.add(T2);
	T3.print();
	return 0;
}
void scan(Number &T)
{
	cout<<"\nEnter the numbers = ";
	cin>>T.x>>T.y;
}



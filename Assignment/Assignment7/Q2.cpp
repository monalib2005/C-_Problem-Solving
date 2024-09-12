/*2.
	class Number	
	{
		public:
			int x,y;
	};
	int main()
	{
		Number T1,T2;
		T1 = scan();
		T2 = scan();
		print(T1);
		print(T2);
	}*/
#include<iostream>
using namespace std;

class Number	
{
	public:
		int x,y;
		
};

void print(Number num);
Number scan();

int main()
{
	Number T1,T2;
	T1 = scan();
	T2 = scan();
	print(T1);
	print(T2);
	return 0;
}
Number scan()
{
	Number temp;
	cout<<"\nEnter the number = ";
	cin>>temp.x>>temp.y;
	return temp;
}
void print(Number num)
{
	cout<<"\nThe numbers are = ";
	cout<<num.x<<num.y;
}

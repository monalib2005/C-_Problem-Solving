/*4.
	class Number
	{
		int x,y;
		void addition(parameter list);
		public:
			void scan();
			void print();
			void myfun(parameter list);
		//Do not add your own memberfunction.		
	};
	int main()
	{
		//Perform T3 = T1 + T2 for given class Number.
	}*/
#include<iostream>
using namespace std;

class Number
{
	int x,y;
	Number addition(Number &num);
	public:
		void scan();
		void print();
		void myfun(Number num);
};

int main()
{
	Number num1,num2;
	num1.scan();
	num2.scan();
	num1.print();
	num2.print();
	num1.myfun(num2);
	return 0;
}

void Number::scan()
{
	cout<<"\nEnter the numbers = ";
	cin>>x>>y;
}

void Number::print()
{
	cout<<"\nThe numbers are = ";
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}

Number Number::addition(Number &num)
{
	Number  temp;
	temp.x = x + num.x;
	temp.y = y + num.y;
	return temp;
}

void Number::myfun(Number num)
{
	addition(num);
}


#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		Number add(Number var);
	public:
		void scan();
		void print();
		static Number myfun(Number D1,Number D2);
};

int main()
{
	Number T1,T2,T3;
	T1.scan();
	T2.scan();
	T3 = Number::myfun(T1,T2);
	T3.print(); 
	
	return 0;
}

void Number::scan()
{
	cout<<"\nEnter the number = ";
	cin>>x>>y;
}

Number Number::add(Number var)
{
	Number temp;
	temp.x = x + var.x;
	temp.y = y + var.y;
	return temp;
}
Number Number::myfun(Number D1,Number D2)
{
	Number res;
	res =D1.add(D2);
	return res;
}
void Number::print()
{
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}

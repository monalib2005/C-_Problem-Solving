#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
	public:
	    void scan();
	private:
	    Number add(Number);
	public:
	    void print();
		Number myfun(Number D2);			
};

int main()
{
	Number T1,T2,T3;
	T1.scan();
	T2.scan();
	//T3 = T1.add(T2);
	T3 = T1.myfun(T2);
	T3.print();
	
	return 0;
}
void Number::scan()
{
	cout<<"\nEnter the number = ";
	cin>>x>>y;
}
Number Number::add(Number T)
{
	 Number Temp;
	 Temp.x = x + T.x;
	 Temp.y = y + T.y;
	 return Temp;	
}
void Number::print()
{
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
}
Number Number::myfun(Number D2)
{
	Number res;
	res = add(D2);
	return res;
}

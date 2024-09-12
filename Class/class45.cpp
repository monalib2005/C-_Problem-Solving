#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		void scan();
    public:
	static void print(Number &var);	
};

int main()
{
	Number T1,T2;
	Number::print(T1);
	Number::print(T2);
	return 0;
}
void Number::scan()
{
	cout<<"\nEnter the no.";
	cin>>x>>y;
}

void Number::print(Number &var1)
{
	var1.scan();
	cout<<var1.x<<var1.y;
}

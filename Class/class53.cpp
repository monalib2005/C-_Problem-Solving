#include<iostream>
using namespace std;

class Number;
class Digit
{
	public:
		void show();
};
class Number
{
	private:
		int n;
		friend void Digit::show();
};


int main()
{
	Digit obj;
	obj.show();
	return 0;
}

void Digit::show()
{
	Number var;
	cin>>var.n;
	cout<<var.n;
}

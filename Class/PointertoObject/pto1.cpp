#include<iostream>
using namespace std;

class Number
{
	public:
		int x, y;
};

int main()
{
	Number var;
	Number *p;
	p = &var;
	p->x = 5;
	p->y = 7;

	cout << p->x << " " << p->y;

	cout << "\nEnter the data here = ";
	cin >> p->x >> p->y;

	cout << "\nThe numbers are = " << p->x << " " << p->y;

	return 0;
}


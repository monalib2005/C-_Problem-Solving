//13.WAP to check working of setw() and endl.
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num = 235;
	char ch = 'M';
	cout<<setw(2)<<num; //235
	cout<<endl<<num<<setw(5)<<ch; //235     M
	return 0;
}

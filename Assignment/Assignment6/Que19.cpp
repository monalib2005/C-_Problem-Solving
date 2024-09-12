//3.WAP to understand working of setw().
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,n1;
	n = 23456;
	n1 = 1234;
	cout<<setw(10)<<n<<n1<<"\n";
	cout<<setw(10)<<n<<setw(10)<<n1<<"\n";
	cout<<setw(3)<<n;
	return 0;
}

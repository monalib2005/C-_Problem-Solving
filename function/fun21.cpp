#include<iostream>
using namespace std;
void simpleinterest(int p,int n,float r=6.5);
int main()
{
	simpleinterest(10000,3);
	simpleinterest(15000,5);
	simpleinterest(50000,2,7.5);
	simpleinterest(1000,3);
	return 0;
}
void simpleinterest(int p,int n,float r)
{
	int si;
	si = (p*n*r)/100;
	cout<<si<<"\n";
	cout<<p<<n<<r;
}

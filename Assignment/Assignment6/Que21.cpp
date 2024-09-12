/*5.WAP to understand working of default arguments.
Write program of simple interest.*/

#include<iostream>
using namespace std;
void simpleinterest(int p,int n,float r=6.5);
int main()
{
	simpleinterest(1000,3);
	simpleinterest(15000,1,7.5);
	simpleinterest(50000,2);
	simpleinterest(7000,1);
	return 0;
}
void simpleinterest(int p,int n,float r)
{
	float si;
	si = (p*n*r)/100;
	cout<<"simpleinterest = "<<si<<"\n";
	cout<<"p = "<<p<<"\nn = "<<n<<"\nr = "<<r;
}

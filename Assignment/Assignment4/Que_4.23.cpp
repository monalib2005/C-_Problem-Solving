//23.Repeat Q22.Returntype of smpintr() must be void now.Print simple interest in main().
#include<iostream>
using namespace std;
int scan();
void smpintr(int p,int n,float r);
int main()
{
	int p,n,r;
	int si;
	p=scan();
	n=scan();
	r=scan();
	smpintr(p,n,r);
	return 0;
}
int scan()
{
	int inp;
	cout<<"\nEnter the input = ";
	cin>>inp;
	return inp;
}
void smpintr(int p,int n,float r)
{
	int si;
	si = (p*n*r)/100;
	cout<<"\nSimple interest = "<<si;
}

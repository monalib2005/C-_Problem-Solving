/*22.Scan principle amount,number of years and rate of interest from user in main().
Define function smpintr() to calculate simple interest.Print simple interest in main().
Calculate simple interest in function and return it to main()*/
#include<iostream>
using namespace std;
int smpintr(int p,int n,float r);
int scan();
int main()
{
	int p,n,r;
	int si;
	p=scan();
	n=scan();
	r=scan();
	si=smpintr(p,n);
	cout<<"\nSimple interest = "<<si;
	
	return 0;
}
int scan()
{
	int inp;
	cout<<"\nEnter the input = ";
	cin>>inp;
	return inp;
}
int smpintr(int p,int n,float r)
{
	int si;
	si = (p*n*r)/100;
	return si;
}

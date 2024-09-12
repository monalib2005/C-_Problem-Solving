//Scan a using ppa.Scan b using pb
//Add a and b in add  using a - pa , b - ppb , add - padd.
//Subtract a & b store in sub using a - ppa, b - pb, sub - ppsub
#include<iostream>
using namespace std;
int main()
{
	int a,b,add,sub;
	int *pa,*pb,*padd,*psub;
	int **ppa,**ppb,**ppadd,**ppsub;
	
	pa = &a;
	pb = &b;
	padd = &add;
	psub = &sub;
	ppa = &pa;
	ppb = &pb;
	ppsub = &psub;
	cout<<"Enter 2 values = ";
	cin>>**ppa>>*pb;
	*padd = *pa + **ppb;
	**ppsub = **ppa - *pb;
	cout<<"Addition = "<<*padd<<"\n";
	cout<<"subtraction = "<<**ppsub;
	
	return 0;
}

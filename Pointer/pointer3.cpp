//Scan a and b using pa and pb.
//add them in add using padd.
//Subtraction in sub using psub
#include<iostream>
using namespace std;

int main()
{
	int a,b,add,sub;
	int *pa,*pb,*padd,*psub;
	pa = &a;
	pb = &b;
	padd = &add;
	psub = &sub;
	cout<<"Enter 2 values = ";
	cin>>*pa>>*pb;
	*padd = *pa + *pb;
	*psub = *pa - *pb;
	cout<<"Addition = "<<*padd<<"\n";
	cout<<"Subtraction = "<<*psub;
	
	return 0;
}

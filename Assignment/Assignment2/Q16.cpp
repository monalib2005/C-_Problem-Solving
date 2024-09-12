//16.Complete the following main() function.
//	int main()	
//	{
//		int a,b;
//	}
//-store address of a in pa and address of pa in ppa.
//-store address of b in pb and address of pb in ppb.
//-scan a using pa.
//-scan b using ppb.
//-print addition of a and b using ppa and pb.
//-check if a is even or odd using ppa.

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	int *pa,*pb;
	int **ppa , **ppb;
	pa = &a;
	pb = &b;
	ppa = &pa;
	ppb = &pb;
	
	cout<<"Enter the value of a = ";
	cin>>*pa;
	cout<<"Enter the valuse of b = ";
	cin>>**ppb;
	
	cout<<"Addition = "<<**ppa + *pb<<"\n";
	if( **ppa % 2 == 0)
	{
		cout<<**ppa<<"is even.";
	}
	else
	{
		cout<<**ppa<<" is odd";
	}
	
	return 0;
}

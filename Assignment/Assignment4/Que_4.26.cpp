/*C)Complete remaining main() function.	
	int main()
	{
		int a,b;
		int *pa,*pb;
		//scan a and b using pa and pb.
		//print addition and subtraction of a and b using pa and pb;
	}*/
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	int *pa,*pb;
	pa = &a;
	pb = &b;
	cout<<"\nEnter the values of a and b = ";
	cin>>*pa>>*pb;
	cout<<"\nAddition = "<<*pa + *pb;
	cout<<"\nSubtraction = "<<*pa - *pb;
	return 0;
}


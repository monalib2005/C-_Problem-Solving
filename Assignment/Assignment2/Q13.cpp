//13.Complete the following main() function.
//	int main()
//	{
//		int a = 10;
//		int *pa;
//	}
//-print value of a using pa.
//-change value of a to 20 using pa.
//-print value of a using pa.

#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int *pa;
	pa = &a;
	
	cout<<*pa<<"\n";
	*pa = 20;
	cout<<*pa;
	
	return 0;
	
}

/*void yourfun(---- p)
{
	---- ;
}

void myfun( ---- m)
{
	yourfun(&m);
}

int main()
{
	int x = 10;
	cout<<"\nx = "<<x;  //10
	
	myfun(&x);
	
	cout<<"\nx = "<<x;  //20
	return 0;
}*/
#include<iostream>
using namespace std;

void yourfun( int **p)
{
	**p = 20 ;
}

void myfun( int *m)
{
	yourfun(&m);
}

int main()
{
	int x = 10;
	cout<<"\nx = "<<x;  //10
	
	myfun(&x);
	
	cout<<"\nx = "<<x;  //20
	return 0;
}

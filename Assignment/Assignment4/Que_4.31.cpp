/*4)

void myfun( ---- m)
{
	----;
}

int main()
{
	int x = 10;
	int *p;
	cout<<"\nx = "<<x;  //10
	---- ;
	
	myfun(&p);
	
	cout<<"\nx = "<<x;  //15
	
	return 0;
}*/
#include<iostream>
using namespace std;

void myfun( int **m)
{
	**m = 15;
}

int main()
{
	int x = 10;
	int *p;
	cout<<"\nx = "<<x;  //10
	p = &x ;
	
	myfun(&p);
	
	cout<<"\nx = "<<x;  //15
	
	return 0;
}

/*9)

void yourfun(---- , ----)
{
	---- ;
	---- ;
}

void myfun(int *m, int *n)
{
	yourfun(&m,&n);
}

int main()
{
	int a = 10;
	int b = 20;
	cout<<a<<" "<<b;  //10  30  
	myfun(&a,&b);
	cout<<"\n"<<a<<" "<<b;  //25  40
	return 0;
}*/
#include<iostream>
using namespace std;

void yourfun(int **p , int **q)
{
	**p = 25 ;
	**q = 40;
}

void myfun(int *m, int *n)
{
	yourfun(&m,&n);
}

int main()
{
	int a = 10;
	int b = 20;
	cout<<a<<" "<<b;  //10  30  
	myfun(&a,&b);
	cout<<"\n"<<a<<" "<<b;  //25  40
	return 0;
}

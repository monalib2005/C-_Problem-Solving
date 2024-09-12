/*void myfun(----m, ----n)
{
	---- ;
	---- ;
}

int main()
{
	int a = 10;
	int b = 20;
	cout<<a<<" "<<b;  //10  20  
	----;
	----;
	
	p = &a;
	q = &b;
	
	myfun(&p,&q);
	
	cout<<a<<" "<<b;  //25  40

	return 0;
}*/
#include<iostream>
using namespace std;

void myfun(int **m, int **n)
{
	**m = 25 ;
	**n = 40;
}

int main()
{
	int a = 10;
	int b = 20;
	cout<<a<<" "<<b;  //10  20  
	int *p;
	int *q;
	
	p = &a;
	q = &b;
	
	myfun(&p,&q);
	
	cout<<a<<" "<<b;  //25  40

	return 0;
}

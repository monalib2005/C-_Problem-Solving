/*1)
void myfun(---- m,---- n)
{
	---- ;
	---- ;
}

int main()
{
	int a = 10;
	int b = 20;
	
	cout<<a<<" "<<b;  //10  20
	
	myfun(----,----);
	
	cout<<a<<" "<<b;  //25  30

	return 0;
}
(can be completed in two different ways)*/
#include<iostream>
using namespace std;

/*void myfun(int &m,int &n)
{
	m = 25 ;
	n = 30;
}

int main()
{
	int a = 10;
	int b = 20;
	
	cout<<a<<" "<<b<<"\n";  //10  20
	
	myfun(a ,b);
	
	cout<<a<<" "<<b;  //25  30

	return 0;
}*/

void myfun(int *m,int *n)
{
	*m = 25 ;
	*n = 30 ;
}

int main()
{
	int a = 10;
	int b = 20;
	
	cout<<a<<" "<<b<<"\n";  //10  20
	
	myfun(&a,&b);
	
	cout<<a<<" "<<b;  //25  30

	return 0;
}

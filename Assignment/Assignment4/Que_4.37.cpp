/*10)
void yourfun( ---- **p)
{
	---- ;
}

void myfun( ---- * m)
{
	yourfun(---);
}

int main()
{
	float x = 10.7;
	cout<<"\nx = "<<x;  //10.7
	
	myfun(&x);
	
	cout<<"\nx = "<<x;  //20.5
	return 0;
}*/
#include<iostream>
using namespace std;

void yourfun( float **p)
{
	**p = 20.5;
}

void myfun( float * m)
{
	yourfun(&m);
}

int main()
{
	float x = 10.7;
	cout<<"\nx = "<<x;  //10.7
	
	myfun(&x);
	
	cout<<"\nx = "<<x;  //20.5
	return 0;
}

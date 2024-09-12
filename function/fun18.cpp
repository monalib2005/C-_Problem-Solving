#include<iostream>
using namespace std;
void operation(int x,int y,int *padd,int *psub);
int main()
{
	int a,b,add,sub;
	a = 10;
	b = 5;
	operation(a,b,&add,&sub);
	cout<<"\nAdd = "<<add;
	cout<<"\nsub = "<<sub;
	return 0;
}
void operation(int x,int y,int *padd,int *psub)
{
	*padd = x + y;
	*psub = x - y;
}

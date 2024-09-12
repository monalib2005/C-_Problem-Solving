#include<iostream>
using namespace std;

int add(int a,int b,int (*psub) (int,int))
{
	cout<<(*psub)(a,b);
	return a + b;
}
int sub(int a,int b)
{
	return a-b;
}
int main()
{
	int (*padd)(int,int,int (*)(int,int));
	padd = &add;
	int ans = (*padd)(3,5,&sub);
	cout<<"\nAns = "<<ans;
	return 0;
}

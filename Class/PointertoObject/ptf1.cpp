#include<iostream>
using namespace std;

void show()
{
	cout<<"\nIn show()";
}

int add(int a,int b)
{
	return a+b;
}
int main()
{
	void (*p) ();
	int (*ptr) (int,int);
	p = &show;
	ptr = &add;
    
    //function calling
    (*p) ();
    int ans = (*ptr)(3,5);
    cout<<"\nAns = "<<ans;
	return 0;
}

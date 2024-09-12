#include<iostream>
using namespace std;

int main()
{
	int x=15;
	int *p;
	int **q;
	p = &x;
	q = &p;
	cout<<"Enter data = ";
	cin>>x;  //we can also use cin>>*p or cin>>**q
	cout<<x<<"\n";
	cout<<*p<<"\n";
	cout<<**q;
	
	return 0;
}

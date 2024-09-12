#include<iostream>
using namespace std;
void show();
int main()
{
	cout<<"\n main starts";
	show();
	show();
	cout<<"\n main ends()";
	return 0;
}
//show(); //this will create error because this is called out off any scope.
void show()
{
	cout<<"\nHello feom show()";
}

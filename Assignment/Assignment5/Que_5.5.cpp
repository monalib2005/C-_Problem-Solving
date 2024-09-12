/*5.WAP to check parameter passing rules.Check following points
-can we mention datatypes for actual parameters?
-can we change number of actual and formal parameters?
-Does any change in formal parameter gets reflected back in actual parameters?
-Can we keep their names same?If their names are same,do they affect each other?*/
#include<iostream>
using namespace std;
void scan(int x,int y);
int main()
{
	int a,b;
	int x,y;
	scan(a,b); //this is not possible to give datatype to actual parameter
	scan(x,y); // We can keep the namesame of actual and formal paramters but they do not affect each other
	return 0;
}
void scan(int x,int y/*,int z*/) //it is not possible to change no. of actual and formal parameters.
{
	cout<<"\nEnter the values of x and y = ";
	cin>>x>>y;
}

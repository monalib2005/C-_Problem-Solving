/*19.Scan a number from user in main().Define functions to find square and cube of a number.
Print both square and cube in main().
(Use parameter passing by value.)*/
#include<iostream>
using namespace std;
int square(int n);
int cube(int n);
int main()
{
	int res1,res2;
	int num;
	cout<<"\nEnter the number = ";
	cin>>num;
	res1=square(num);
	res2=cube(num);
	cout<<"\nSquare = "<<res1;
	cout<<"\nCube = "<<res2;
	
	return 0;
}
int square(int n)
{
	return n*n;
}
int cube(int n)
{
	return n*n*n;
}


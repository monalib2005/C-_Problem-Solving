/*20.Scan a number from user in main().Define functions to find square and cube of a number.
Define only one function power() and print both results in main().
(Use parameter passing by reference)*/
#include<iostream>
using namespace std;
void power(int n,int &refsqu,int &refcube);
int main()
{
	int squ,cube;
	int num;
	cout<<"\nEnter the number = ";
	cin>>num;
	power(num,squ,cube);
	cout<<"\nSquare = "<<squ;
	cout<<"\nCube = "<<cube;
	return 0;
}
void power(int n,int &refsqu,int &refcube)
{
	refsqu = n*n;
	refcube = n*n*n;
}

#include<iostream>
using namespace std;
//Q3.Scan 2 numbers from user.Print square and cube of both numbers.
int main()
{
	int sqr1,sqr2;
	int cube1,cube2;
	int num1,num2;
	cout<<"\nEnter two numbers = ";
	cin>>num1>>num2;
	
	sqr1 = num1*num1;
	sqr2 = num2*num2;
	cube1 = num1*num1*num1;
	cube2 = num2*num2*num2;
	
	cout<<"\n"<<sqr1<<","<<sqr2<<" are the squares of two numbers respectively.";
	cout<<"\n"<<cube1<<","<<cube2<<" are the cubes of two numbers respectively.";
	return 0;
}

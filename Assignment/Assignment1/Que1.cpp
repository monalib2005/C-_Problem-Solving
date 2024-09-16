#include<iostream>
using namespace std;
//Q1.Scan 3 integers from user.Print their average.
int main()
{
	float avg;
	int num1,num2,num3;
	cout<<"\nEnter three values = ";
	cin>>num1>>num2>>num3;
	
	avg=(num1+num2+num3)/(float)3; //changed the data type.
	//When you perform division between two integers in C++, the result is an integer.
	// Any fractional part is truncated (discarded), not rounded.Hence we have to typecast it
	cout<<"\nAverage = "<<avg;
	return 0;
}

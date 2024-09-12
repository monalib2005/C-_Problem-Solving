#include<iostream>
using namespace std;
//Q1.Scan 3 integers from user.Print their average.
int main()
{
	float avg;
	int num1,num2,num3;
	cout<<"\nEnter three values = ";
	cin>>num1>>num2>>num3;
	
	avg=(num1+num2+num3)/(float)3; //temporalily changed the data type
	cout<<"\nAverage = "<<avg;
	return 0;
}

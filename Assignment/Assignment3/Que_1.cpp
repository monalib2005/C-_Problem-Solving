//Q1.Scan 3 integers from user.Find the largest value using conditional operator.

#include<iostream>
using namespace std;

int main()
{
	int num1,num2,num3;
	cout<<"Enter the value of number = ";
	cin>>num1>>num2>>num3;
	
	num1 > num2 && num1 >num3 ? cout<<num1<<" is greatest number." : num2>num3 && num2 > num1 ? cout<<num2<<" is greatest number." : cout<<num3<<" is greatest number."; 
	return 0;
}

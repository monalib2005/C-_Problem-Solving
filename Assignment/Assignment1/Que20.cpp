#include<iostream>
using namespace std;
//Q20.Scan a 3 digit number from user.Print its each digit separately.
int main()
{
	int num,digit1,digit2,digit3;
	cout<<"\nEnter three digit number = ";
	cin>>num;
	
	while( num<100 || num>999)
	{
		cout<<"\nEnter valid number.";
		cin>>num;
	}
	
	digit1 = num/100;
	digit2 = (num/10)%10;
	digit3 = num%10;
	
	cout<<"\nThe seperate digits are as follows.";
	cout<<"\n"<<digit1;
	cout<<"\n"<<digit2;
	cout<<"\n"<<digit3;
	return 0;
}

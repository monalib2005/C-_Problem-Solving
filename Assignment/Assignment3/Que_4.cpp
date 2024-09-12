//Q4.Write a menu driven program for arithmetic operations of 2 integers.
#include<iostream>
using namespace std;

int main()
{
	int choice;
	int num1,num2;
	cout<<"1 - Addition"<<"\n"<<"2 - Subtraction."<<"\n"<<"3 - Multiplication"<<"\n"<<"4 - Division";
	cout<<"\n"<<"Enter your choice = ";
	cin>>choice;
	cout<<"Enter numbers = ";
	cin>>num1>>num2;
	
	switch(choice)
	{
		case 1:
			cout<<"Addition = "<<num1 + num2;
			break;
		case 2:
		    cout<<"Subtraction = "<<num1 - num2;
		    break;
	    case 3:
		    cout<<"multiplication = "<<num1 * num2;
		    break;
		case 4:
		    cout<<"Division = "<<num1/num2;
			break;				
	}
	return 0;
}

#include<iostream>
using namespace std;
/*Q9.Scan 2 integers from user.Then scan a choice also from user.
If user enters 1 as a choice,print addition of first 2 integers.
Otherwise print subtraction of 2 integers.*/
int main()
{
//	int num1,num2,choice;
//	cout<<"\nEnter the two numbers = ";
//	cin>>num1>>num2;
//	cout<<"\nChoice('1' for addition) = ";
//	cin>>choice;
//	
//	choice == 1 ? cout<< num1 + num2 : cout<< num1-num2;
	
	
	int num1,num2,choice;
	cout<<"\nEnter two numbers = ";
	cin>>num1>>num2;
	cout<<"\nYour choices = ";
	cout<<"\n1-Addition\n2-Subtraction\n3-divison\n4-multiplication\n";
	cin>>choice;
	
	if(choice == 1)
	{
		cout<<"\nAddition = "<<num1+num2;
	}
	else if(choice == 2)
	{
		cout<<"\nSubtraction = "<<num1-num2;
	}
	else if(choice == 3)
	{
		cout<<"\nDivision = "<<num1/num2;
	}
	else if(choice == 4)
	{
		cout<<"\nMultiplication = "<<num1*num2;
	}
	else
	{
		cout<<"\nEnter correct choice.";
	}
	return 0;
}

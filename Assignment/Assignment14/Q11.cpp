/*Q6.
Scan 2 integers from user.Print their addition.
Then ask user if he wants to perform addition of 2 more integers.
Repeat the process if he wants to.Else stop the program.*/
#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	char ch;
	cout<<"\nEnter two numbers = ";
	cin>>num1>>num2;
	cout<<"\nAddition = "<<num1 + num2;
	while(1)
	{
		cout<<"\nWant to perform addition of more numbers(y/n) = ";
		cin>>ch;
		if(ch == 'y')
		{
			cout<<"\nEnter two more numbers = ";
			cin>>num1>>num2;
			cout<<"\nAddition = "<<num1 + num2;
		}
		else if(ch == 'n')
		{
			break;
		}
	}
	return 0;
}

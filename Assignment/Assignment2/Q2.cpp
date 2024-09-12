//Scan 2 integers from user.Compare them using if else.
//(Compare means find which one is smaller and greater or check if they are equal)

#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	cout<<"enter the two numbers = ";
	cin>>num1>>num2;
	
	if(num1>num2)
	{
		cout<<num1<<" is greater";
		cout<<"\n"<<num2<<" is smaller";
	}
	else if(num2>num1)
	{
		cout<<num2<<" is greater";
		cout<<"\n"<<num1<<" is smaller";
	}
	else
	{
		cout<<"both are equal";
	}
	
	return 0;
}

//Scan 2 numbers from user.Print their 4 arithmetic results in following format.
//If user enters 20 and 10,then result must be

//20 + 10 = 30
//20 - 10 = 10
//20 * 10 = 200
//20 / 10 = 2
#include<iostream>
using namespace std;

int main()
{
	
	int num1,num2;
	cout<<"enter the two numbers = ";
	cin>>num1>>num2;
	
	cout<<num1<<" + "<<num2<<" = "<<num1+num2<<"\n";
	cout<<num1<<" - "<<num2<<" = "<<num1-num2<<"\n";
	cout<<num1<<" * "<<num2<<" = "<<num1*num2<<"\n";
	cout<<num1<<" / "<<num2<<" = "<<num1/num2<<"\n";
	return 0;
}

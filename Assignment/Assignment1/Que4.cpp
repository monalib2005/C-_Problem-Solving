#include<iostream>
using namespace std;
//Q4.Scan a number from user.Print message correct input if numer lies between 15 and 20.
int main()
{
	int num;
	cout<<"\nEnter a number = ";
	cin>>num;
	
//	if(num>15 && num<20)
//	{
//		cout<<"\nCorrect Input.";
//	}
	
	//using conditional operator.
	num>15 && num<20 ? cout<<"\nCorrect Input" : cout<<"";
	return 0;
}

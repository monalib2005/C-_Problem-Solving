#include<iostream>
using namespace std;
//Q2.Scan 3 numbers from user.Find the largest of them.
int main()
{
	int num1,num2,num3;
	cout<<"\nEnter three numbers = ";
	cin>>num1>>num2>>num3;
	
//	if(num1>num2 && num1>num3)
//	{
//		cout<<"\n"<<num1<<" is the largest number";
//	}
//	else if(num2>num1 && num2>num3)
//	{
//		cout<<"\n"<<num2<<" is the greastest number.";
//	}
//	else
//	{
//		cout<<"\n"<<num3<<" is the greatest number.";
//	}


    
    //using conditional operator.
//    int max;
//    
//    max = num1 > num2 ? num1 + 0 : num2 + 0;
//    max = max > num3 ? max : num3;
//    
//    cout<<"\nMaximum value = "<<max;


    
    //using if-else condition
    if(num1>num2)
	{
		if(num1>num3)
		{
			cout<<"\n"<<num1<<" is the largest number";
		}
		else
		{
			cout<<"\n"<<num3<<" is the largest number";
		}		
	}
	else
	{
		cout<<"\n"<<num2<<" is the largest number";
	}
	return 0;
}

//Q8.Keep scanning a number from user until he enters 0.Count number of positive and negative integers user has entered.
//The loop you have to use is given below.You have to complete the remaining code.
//	while(1)
//	{
//		cin>>num;
//		if(num==0)
//		{
//			break;
//		}
//	}
#include<iostream>
using namespace std;

int main()
{
	int num;
	int positive=0;
	int negative=0;
	cout<<"Enter a number = ";
	while(1)
	{
		cin>>num;
		if(num==0)
		{
			break;
	    }
		if(num>0)
		{
			positive++;
		}
		else if(num<0)
		{
			negative++;
		}
		else
		{
			break;
		}
	}
	cout<<"positive values = "<<positive<<"\n";
	cout<<"negative values = "<<negative;
	
	return 0;
}

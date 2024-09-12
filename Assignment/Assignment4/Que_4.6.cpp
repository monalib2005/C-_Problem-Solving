//6.Keep scanning a number from user.Print addition of positive and negative numbers seperately.

#include<iostream>
using namespace std;

int main()
{
	int positive = 0;
	int negative = 0;
	int num;
	cout<<"Enter the number = ";
	while (2<6)
	{
		cin>>num;
		
		if(num>0)
		{
		    positive = positive + num;
		}
		else
		{
			negative = negative + num;
		}
		if(num==0)
		{
			break;
		}
	}
	cout<<"\nAddition of positive = "<<positive;
	cout<<"\nAddition of negative = "<<negative;
	return 0;
}

//find maximum between arrays
#include<iostream>
using namespace std;

class Number
{
	public:
		int num[5];
};

int main()
{
	Number var[4];
	int i,j;
	int max0,max1,max2,max3;
	for(i=0;i<=3;i++)
	{
		cout<<"Enter the numbers of index "<<i<<" = ";
		for(j=0;j<=4;j++)
		{
			cin>>var[i].num[j];
		}
	}
	
	max0 = var[0].num[0];
	for(i=0;i<=4;i++)
	{
		if(var[0].num[i]>max0)
		{
			max0 = var[0].num[i];
		}
	} 
	
	max1 = var[1].num[0]; //koi bhi value assignkarsakte in index var[i]
	for(i=0;i<=4;i++)
	{
		if(var[1].num[i]>max0)
		{
			max1 = var[1].num[i];
		}
	}
	
	max2 = var[2].num[0];
	for(i=0;i<=4;i++)
	{
		if(var[2].num[i]>max0)
		{
			max2 = var[2].num[i];
		}
	}
	
	max3 = var[3].num[0];
	for(i=0;i<=4;i++)
	{
		if(var[3].num[i]>max0)
		{
			max3 = var[3].num[i];
		}
	}
	
	//we got the maximum form each index of var
	
	//finding max of them
	max0 = max0>max1 ? max0 : max1;
	max0 = max0>max2 ? max0 : max2;
	max0 = max0>max3 ? max0 : max3;
	
	cout<<"\nThe maximu of all of them is = "<<max0;
	return 0;
}

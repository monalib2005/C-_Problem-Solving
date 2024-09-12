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
	int max0,max1,max2,max3;
	int i,j;
	for(i=0;i<=3;i++)
	{
		cout<<"ENter the number of "<<i<<" index";
		for(j=0;j<=4;j++)
		{
			cin>>var[i].num[j];
		}
	}
	
	max0 = var[0].num[0];
	for(j=0;j<=4;j++)
	{
		if(max0<var[0].num[j])
		{
			max0 = var[0].num[j];
		}
	}
	max1 = var[1].num[0];
	for(j=0;j<=4;j++)
	{
		if(max1<var[1].num[j])
		{
			max1 = var[1].num[j];
		}
	}
	max2 = var[2].num[0];
	for(j=0;j<=4;j++)
	{
		if(max2<var[2].num[j])
		{
			max2 = var[2].num[j];
		}
	}
	max3 = var[3].num[0];
	for(j=0;j<=4;j++)
	{
		if(max3<var[3].num[j])
		{
			max3 = var[3].num[j];
		}
	}
	
	max0 = max0>max1 ? max0 : max1;
	max0 = max0>max2 ? max0 : max2;
	max0 = max0>max3 ? max0 : max3;
	
	cout<<"\nThe maximum = "<<max0;
	return 0;
}

//finding max updated code
#include<iostream>
using namespace std;

class Number
{
	public:
		int num[5];
};

int main()
{
	int i,j;
	int max;
	Number var[4];
	for(i=0;i<=3;i++)
	{
		cout<<"\nEnter the numbers of "<<i<<" = ";
		for(j=0;j<=4;j++)
		{
			cin>>var[i].num[j];
		}
	}
	max = var[0].num[0];
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(var[i].num[j]>max)
			{
				max =var[i].num[j];
			}
		}
	}
	cout<<"\nMaximum = "<<max;
	return 0;
}

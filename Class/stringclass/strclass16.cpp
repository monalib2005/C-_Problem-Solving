#include<iostream>
using namespace std;

class Number
{
	public:
		int num[4];
};

int main()
{
	Number var[3];
	int i,j;
	int max;
	
	for(i=0;i<=3;i++)
	{
		cout<<"ENter the number of "<<i<<" index";
		for(j=0;j<=4;j++)
		{
			cin>>var[i].num[j];
		}
	}
	
	max = var[0].num[0];
	//maximum
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(var[i].num[j]>max)
			{
				max = var[i].num[j];
			}
		}
	}
	
	cout<<"\nMaximum = "<<max;
	return 0;
}

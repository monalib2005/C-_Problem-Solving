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
	var[0].num[1] = 5;
	var[1].num[3] = 7;
	
	cout<<"\nEnter the numbers = ";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			cin>>var[i].num[j];
		}
	}
	
	cout<<"\nThe numbers are = ";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			cout<<var[i].num[j]<<endl;
		}
	}
	return 0;
}

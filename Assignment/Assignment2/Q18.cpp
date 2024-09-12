//18.Scan array of 8 fractions from user.Count how many of them are greater than 10.
#include<iostream>
using namespace std;

int main()
{
	float f[8];
	cout<<"Enter eight values of array = ";
	for(int i=0;i<=7;i++)
	{
		cin>>f[i];
	}
	int count = 0;
	for(int i=0;i<=7;i++)
	{
		if(f[i] > 10)
		{
			count++;
		}
	}
	cout<<"Values greater than 10 = "<<count;
	
	return 0;
}

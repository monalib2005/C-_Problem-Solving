/*Q5.
Scan 6 city names from user.Sort them alphabetically in ascending order.
Use inbuilt string data type.*/
#include<iostream>
using namespace std;

int main()
{
	string city[6];
	int i,j;
	cout<<"\nEnter city names = ";
	for(i=0;i<6;i++)
	{
		cin>>city[i];
	}
	
	string temp;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(city[i]>city[j])
			{
				temp = city[i];
				city[i] = city[j];
				city[j] = temp;
			}
		}
	}
	
	//printing sorted city names
	cout<<"\nSorted city = ";
	for(i=0;i<6;i++)
	{
		cout<<city[i]<<endl;
	}
	return 0;
}

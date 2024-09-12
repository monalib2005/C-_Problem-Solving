/*Declare and initialize an array of 8 integers.
Scan a number from user.If that number is present in array,delete it.
Deletion of element will not change*/
#include<iostream>
using namespace std;

int find(int *t,int n,int x);
int main()
{
	int num[8] = {2,3,45,6,22,56,21,87};
	int i,x;
	cout<<"\nEnter the number to be searched = ";
	cin>>x;
	int index = find(num,8,x);
	if(index>-1)
	{
		for(i=index;i<8;i++)
		{
			num[i] = num[i+1];
		}
	}
	if(index == -1)
	{
		cout<<"\nElement not found";
	}
	
	if(index>-1)
	{
		cout<<"\nElemenst are = ";
		for(i=0;i<8;i++)
	    {
		    cout<<num[i]<<endl;
	    }
	}
	return 0;
}

int find(int *t,int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(*(t+i) == x)
		{
			return i;
		}
	}
	return -1;
}


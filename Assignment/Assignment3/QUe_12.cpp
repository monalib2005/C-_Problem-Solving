//Q12.Create memory at runtime for n integers.Scan n integers from user.Count how many times 10
//is present in the array.

#include<iostream>
using namespace std;

int main()
{
	int n;
	int count =0;
	int *p;
	
	cout<<"Enter the value of n = ";
	cin>>n;
	p = new int[n];
	cout<<"Enter the valur = ";
	for(int i = 0;i<=n-1;i++)
	{
		cin>>*(p+i);
	}
	for(int i = 0;i<=n-1;i++)
	{
		if(*(p+i) == 10)
		{
			count++;
		}
	}
	cout<<"The total of 10 is = "<<count;
	
	return 0;
}

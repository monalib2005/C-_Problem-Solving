//2.Scan array of 6 integers from user.Find the largest value from array.
//(pointer notation)
#include<iostream>
using namespace std;

int main()
{
	int i;
	int max = -1;
	int num[6];
	int *p;
	p = &num[0];
	
	cout<<"Enter the values of array = ";
	for(i = 0;i<=5;i++)
	{
		cin>>*(p+i);
	}
	for(i = 0;i<=5;i++)
	{
		if(*(p+i)>max)
		{
			max = *(p+i);
		}
	}
	cout<<"The largest value of array is = "<<max;
	
	return 0;
}

//3.Declare and itialize an array of 8 integers.Find the smallest value from array.
//(pointer notation)

#include<iostream>
using namespace std;

int main()
{
	int min = 1000000000;
	int i;
	int num[8];
	int *p;
	p = &num[0];
	
	cout<<"Enter the values of array = ";
	for(i=0;i<=7;i++)
	{
		cin>>*(p+i);
	}
	for(i= 0;i<=7;i++)
	{
		if(*(p+i)<min)
		{
			min = *(p+i);
		}
	}
	cout<<"The minimum value is = "<<min;
	
	return 0;
}

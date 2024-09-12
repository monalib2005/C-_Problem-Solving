//21.Declare and initialize an array of 6 integers.Access your arrary using pointer and count 
//how many times 10 is present in the array.

#include<iostream>
using namespace std;

int main()
{
	int num[6] = {10,45,10,54,10,6};
	int count = 0;
	
	for(int i=0;i<=5;i++)
	{
		if(num[i]==10)
		{
			count++;
		}
	}
	cout<<count;
	
	return 0;
}

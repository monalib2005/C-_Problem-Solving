/*Q2.
Scan n integers from user.Sort them in ascending order.*/
#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	int *p;
	cout<<"\nEnter the number of elements = ";
	cin>>n;
	
	p = new int[n];
	
	//scanning
	cout<<"\nEnter numbers = ";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i)
		;
	}
	
	//sorting
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	
	//printing
	cout<<"\nSorted elements = ";
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<endl;
	}
	return 0;
}

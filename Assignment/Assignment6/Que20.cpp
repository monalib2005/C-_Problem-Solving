/*4.Create an array of 6 fractions.Scan them from user.Sort them in ascending order.
Then find the smallest and largest values from array.*/
#include<iostream>
using namespace std;
void sort(int *p,int n);
int main()
{
	int n,i;
	int *p;
	cout<<"\nEnter the value of n = ";
	cin>>n;
	p = new int[n];
	for(i=0;i<=n-1;i++)
	{
		cin>>*(p+i);
	}
	sort(p,n);
	for(i=0;i<=n-1;i++)
	{
		cout<<*(p+i);
	}

	return 0;
}

void sort(int *p,int n)
{
	int i,j;
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(*(p+i)>*(p+j))
			{
				int temp;
				temp = *(p+j);
				*(p+j) = *(p+i);
				*(p+i) = temp;
			}
			
		}
	}
}

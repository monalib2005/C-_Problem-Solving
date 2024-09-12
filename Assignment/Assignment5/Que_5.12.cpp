/*12.Scan array of n integers from user.Sort it in descending order.
Find the smallest and largest value in the array.
Define function for each task.We have seen how to pass array to function.
Please refer notebook.*/
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
	cout<<"Array in descending order is = ";
	for(i=0;i<=n-1;i++)
	{
		cout<<*(p+i)<<"\n";
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
			if(*(p+i)<*(p+j))
			{
				int temp;
				temp = *(p+j);
				*(p+j) = *(p+i);
				*(p+i) = temp;
			}
			
		}
	}
}

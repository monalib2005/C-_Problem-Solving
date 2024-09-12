/*16.Scan n integers from user.Print addition of all elements.Print result in main().
Define function for each task.We have seen how to pass address to function.
Please refer notebook.*/
#include<iostream>
using namespace std;
void scan(int *q,int n);
void add(int *q,int n);
int main()
{
	int *p;
	int n;
	cout<<"\nEnter the value of of n =";
	cin>>n;
	p = new int[n];
	scan(p,n);
	add(p,5);
	return 0;
}
void scan(int *q,int n)
{
	int i;
	cout<<"\nEnter the values = ";
	for(i=0;i<=n-1;i++)
	{
		cin>>*(q+i);
	}
}
void add(int *q,int n)
{
	int sum=0;
	int i;
	for(i=0;i<=n-1;i++)
	{
		sum=sum + *(q+i);
	}
	cout<<"sum = "<<sum;
}

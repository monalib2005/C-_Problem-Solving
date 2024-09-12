/*17.Scan n fraction values from user.Find maximumm and minimum value from given values.
Define function for each task.We have seen how to pass address to function.
Please refer notebook.*/
#include<iostream>
using namespace std;
void scan(float *q,int n);
void min(float *q,int n);
void max(float *q,int n);
int main()
{
	float *p;
	int n;
	cout<<"\nEnter the value of n = ";
	cin>>n;
	p = new float[n];
	scan(p,n);
	max(p,n);
	min(p,n);
	return 0;
}
void scan(float *q,int n)
{
	cout<<"\nEnter the values of fraction = ";
	int i;
	for(i=0;i<=n-1;i++)
	{
		cin>>*(q+i);
	}
}
void max(float *q,int n)
{
	float max = -1;
	int i;
	for(i=0;i<=n-1;i++)
	{
		if(*(q+i)>max)
		{
			max=*(q+i);
		}
	}
	cout<<"The maximum value is = "<<max;
}
void min(float *q,int n)
{
	float min=1000000000;
	int i;
	for(i=0;i<=n-1;i++)
	{
		if (*(q+i)<min)
		{
			min=*(q+i);
		}
	}
	cout<<"\nThe minimum number is = "<<min;
}

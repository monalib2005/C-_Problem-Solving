//Q11.Scan array of n integers from user.Print addition of all integers.
//While printing the result,first print whole array then print addition.

#include<iostreaM>
using namespace std;

int main()
{
	int n;
	int *p;
	int sum = 0;
	
	cout<<"Enter the range of array = ";
	cin>>n;
	p = new int[n];
	cout<<"Enter the values of n = ";
	for(int i = 0;i<=n-1;i++)
	{
		cin>>*(p+i);
	}
	cout<<"The whole array as follows = ";
	for(int i = 0;i<=n-1;i++)
	{
		cout<<*(p+i)<<"\n";
	}
	for(int i = 0;i<=n-1;i++)
	{
		sum = sum + *(p + i);
	}
	cout<<"Sum of the array elements is = "<<sum;
	return 0;
}

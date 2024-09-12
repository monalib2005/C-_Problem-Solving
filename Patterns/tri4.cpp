#include<iostream>
using namespace std;

//floyd triangle pattern
int main()
{
	int i,j,n;
	int num = 1;
	cout<<"\nEnter the number = ";
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<i+1;j++)
		{
			cout<<num<<"  ";
			num = num + 1;
		}
		cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;

//----------------reverse triangle pattern--------------------

//int main()
//{
//	int i,j,n;
//	cout<<"\nEnter the number = ";
//	cin>>n;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<i+1;j++)
//		{
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

int main()
{
	int i,j,n;
	cout<<"\nEnter the number = ";
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j>0;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}

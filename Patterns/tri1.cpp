#include<iostream>
using namespace std;

//int main()
//{
//	int i,j,n;
//	cout<<"\nENter the number - ";
//	cin>>n;
//	for(i=n;i>=1;i--)
//	{
//		for(j=i;j<=n;j++)
//		{
//			cout<<"*"<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//-------------------or-------------

int main()
{
	int i,j,n;
	cout<<"\nENter the number - ";
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<i+1;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}

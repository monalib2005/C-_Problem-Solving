#include<iostream>
using namespace std;

//int main()
//{
//	int i,j;
//	int n;
//	cout<<"Enter the number = ";
//	cin>>n;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			cout<<i<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}


//int main()
//{
//	int i,j;
//	int n;
//	cout<<"Enter the number = ";
//	cin>>n;
//	for(i=1;i<=n;i++) //coloums
//	{
//		for(j=1;j<=3;j++)
//		{
//			cout<<"*"<<" "; //rows
//		}
//		cout<<endl;
//	}
//	return 0;
//}




int main()
{
	int i;
	int j;
	int n;
	cout<<"Enter the number = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		char ch = 'A';
		for(j=1;j<=n;j++)
		{
			cout<<ch<<" ";
			ch = ch + 1;
		}
		cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;

//---------------inverted triangle pattern-----------

//int main()
//{
//	int i,j;
//	int n;
//	cout<<"\nEnter the number = ";
//	cin>>n;
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<i;j++)
//		{
//			cout<<" ";
//		}
//		
//		for(int k=0;k<n-i;k++)
//		{
//			cout<<i+1;
//		}
//		cout<<endl;
//	}
//	return 0;
//}










int main()
{
	int i,j;
	int n;
	char ch = 'A';
	cout<<"\nEnter the number = ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<" ";
		}
		
		for(int k=0;k<n-i;k++)
		{
			cout<<ch;
		}
		ch = ch + 1;
		cout<<endl;
	}
	return 0;
}

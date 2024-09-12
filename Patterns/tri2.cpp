#include<iostream>
using namespace std;

//int main()
//{
//	int i,j,n;
//	cout<<"\nEnter number = ";
//	cin>>n;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<i+1;j++)
//		{
//			cout<<i<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}



//for alphabets

int main()
{
	int i,j,n;
	char ch = 'A';
	cout<<"\nEnter number = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i+1;j++)
		{
			cout<<ch<<" ";
		}
		ch = ch + 1;
		cout<<endl;
	}
	return 0;
}

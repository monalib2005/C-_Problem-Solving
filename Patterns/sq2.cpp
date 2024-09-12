#include<iostream>
#include<iomanip>
using namespace std;

//int main()
//{
//	int i,j,n;
//	int num = 1;
//	cout<<"\nEnter the number = ";
//	cin>>n;
//	for(i=0;i<=n-1;i++)
//	{
//		for(j=0;j<=n-1;j++)
//		{
//			cout<<setw(3)<<num;
//			num = num + 1;
//		}
//		cout<<endl;
//	}
//	return 0;
//}



int main()
{
	int i,j,n;
	char ch = 'A';
	cout<<"\nEnter the number = ";
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			cout<<setw(3)<<ch;
			ch = ch + 1;
		}
		cout<<endl;
	}
	return 0;
}

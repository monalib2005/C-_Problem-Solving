#include<iostream>
using namespace std;

//--------------pyramid pattern-----------------

int main()
{
	int i,j;
	int n;
	cout<<"\nEnter number = ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		//spaces
		for(j=0;j<n-i-1;j++)
		{
			cout<<"  ";
		}
		
		for(j=0;j<i+1;j++)
		{
			cout<<j+1<<" ";
		}
		for(j=i;j>0;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0; 
}

#include<iostream>
using namespace std;

class Number
{
	public:
		int num[3];
};

int main()
{
	Number n1;
	int i;
	cout<<"\nEnter the numbers = ";
	for(i=0;i<=2;i++)
	{
		cin>>n1.num[i];
	
	}
	cout<<"\nThe numbers are = ";
	for(i=0;i<=2;i++)
	{
		cout<<n1.num[i];
	
	}
	return 0;
}

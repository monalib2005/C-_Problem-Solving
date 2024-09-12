//Q7.Scan array of 8 integers from user.Copy it in another array in reverse order.
//(Write code on paper first.)
#include<iostream>
using namespace std;

int main()
{
	int num[8],num1[8];
	int *p;
	int *q;
	p = &num[0];
	q = &num1[0];
	
	cout<<"Enter the values in the array = ";
	for(int i = 0;i<=7;i++)
	{
		cin>>*(p+i);
	}
	for(int i = 0;i<=7;i++)
	{
		num1[i] = num[7-i];
	}
	cout<<"The reversed array is as folows = ";
	for(int i = 0;i<=7;i++)
	{
		cout<<*(q+i)<<"\n";
	}
	return 0;
}

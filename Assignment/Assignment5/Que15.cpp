/*15.Declare array of 5 integers.Scan those 5 integers from user.Accept only positive value
as input.If user enters negative value,give message "Please enter positive values only".
Write whole code in main() only.*/
#include<iostream>
using namespace std;

int main()
{
	int num[5];
	int i;
	cout<<"\nEnter the values = ";
	for(i=0;i<=4;i++)
	{
		while(1)
		{
			cin>>num[i];
			if(num[i]>0)
			{
				break;
			}
			else
			{
				cout<<"\nEnter the positive value =  ";
			}
		}
	}
	for(i=0;i<=4;i++)
	{
		cout<<num[i];
	}
	return 0;
}

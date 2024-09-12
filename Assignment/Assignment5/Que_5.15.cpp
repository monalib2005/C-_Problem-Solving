/*15.Declare array of 5 integers.Scan those 5 integers from user.Accept only positive value
as input.If user enters negative value,give message "Please enter positive values only".
Write whole code in main() only.*/
#include<iostream>
using namespace std;

int main()
{
	int num[5];
	int i;
	for(i=0;i<=4;i++)
	{
		while(1)
		{
			cout<<"\nEnter the number = ";
			cin>>num[i];
			if (num[i]>0)
			{
				break;
			}
			else
			{
				while(1)
				{
					cout<<"\nEnter positive value = ";
				    cin>>num[i];
					if (num[i]>0)
					{
						break;
					}
				}
			}
		}
	
	}
	cout<<"\nThe values are as follows = ";
	for(i=0;i<=4;i++)
	{
		cout<<num[i];
	}
	return 0;
}

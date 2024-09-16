/*7.Scan array of 8 integers from user.Write menu driven program for following activities.
-find largest value
-find smallest value
-Scan a number from user and check if it is present in the array or not.*/

#include<iostream>
using namespace std;

int main()
{
	int i;
	int max = -1;
	int min = 100;
	int choice;
	int num[8];
	cout<<"Enter the values of array  = ";
	for(i=0;i<=7;i++)
	{
		cin>>num[i];
	}
	cout<<"\n1-largest value\n2-smallest value\n3-to check value is present or not.";
	cout<<"\nEnter your choice  = ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			for(i = 0;i<=7;i++)
			{
				if(num[i]>max)
				{
					max = num[i];
				}
			}
			cout<<"The largest value is = "<<max;
			break;
		case 2:
			for(i = 0;i<=7;i++)
			{
				if(num[i]<min)
				{
					min = num[i];
				}
			}
			cout<<"\nThe minimum value is = "<<min;
			break;
		case 3:
			int numb;
		    cout<<"\nenter the number to check = ";
			cin>>numb;
			for(i=0;i<=7;i++)
			{
				if(num[i] == numb)
				{
					cout<<"\nThis is present in the array.";
				}
			}
			break;
		default:
		    cout<<"\nWrong input.";		
			
	}
	return 0;
}

//Q6.Scan an array of 6 inetegers from user.Find the maximum value in the array.
//(Write code on paper first.)
#include<iostream>
using namespace std;

int main()
{
//	int num[6];
//	int i;
//	cout<<"Enter the values of numbers = ";
//	for(i = 0;i<=5;i++)
//	{
//		cin>>num[i];
//    }
//    if(num[0]>num[1] && num[0]>num[2] && num[0]>num[3] && num[0]>num[4] && num[0]>num[5])
//	{
//		cout<<num[0]<<" is greatest number .";
//	}
//	else if(num[1]>num[0] && num[1]>num[2] && num[1]>num[3] && num[1]>num[4] && num[1]>num[5])
//	{
//		cout<<num[1]<<" is greatest number.";
//	}
//	else if(num[2]>num[0] && num[2]>num[1] && num[2]>num[3] && num[2]>num[4] && num[2]>num[5])
//	{
//		cout<<num[2]<<" is greatest number.";
//	}
//	else if(num[3]>num[0] && num[3]>num[1] && num[3]>num[2] && num[3]>num[4] && num[4]>num[5])
//	{
//		cout<<num[3]<<" is greatest number.";
//	}
//	else if(num[4]>num[1] && num[4]>num[2] && num[4]>num[3] && num[4]>num[0] && num[4]>num[5])
//	{
//		cout<<num[4]<<" is greatest number.0";
//	}
//	else
//	{
//		cout<<num[5]<<" is greatest number.";
//	}


    int num[6];
    int max = -1;
    int *p;
    int i;
    p = &num[0];
    cout<<"Enter the values of array = ";
    for(i = 0;i<=5;i++)
	{
		cin>>*(p+i);
	}
    for(i = 0;i<=5;i++)
	{
		if(num[i]>max)
		{
			max = num[i];
		}
	}
	cout<<"The maximum number is = "<<max;
	return 0;
}

/*9.Read carefully and complete the code for mentioned task.
9.Read carefully and complete the code for mentioned task.
class Number
{
	public:
		int num[5];
		//no member function
};
int main()
{
	Number var1,var2,var3;
	//scan data for 3 objects.
	//Find the largest value among all 15 integers.
	//Write all code in main().
}
int main()
{
	Number var1,var2,var3;
	//scan data for 3 objects.
	//Find the largest value among all 15 integers.
	//Write all code in main().
}*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int num[5];
		//no member function
};

int main()
{
	Number var1,var2,var3;
	int max1,max2,max3;
	int i;
	cout<<"\nEnter the values of var1 = ";
	for(i=0;i<=4;i++)
	{
		cin>>var1.num[i];
	}
	cout<<"\nEnter the values of var2 = ";
	for(i=0;i<=4;i++)
	{
		cin>>var2.num[i];
	}
	cout<<"\nEnter the values of var3 = ";
	for(i=0;i<=4;i++)
	{
		cin>>var3.num[i];
	}
	
	//maximum from each one
	max1 = var1.num[0];
	for(i=0;i<=4;i++)
	{
		if(var1.num[i]>max1)
		{
			max1 = var1.num[i];
		}
	}
	
	max2 = var2.num[0];
	for(i=0;i<=4;i++)
	{
		if(var2.num[i]>max2)
		{
			max2 = var2.num[i];
		}
	}
	
	max3 = var3.num[0];
	for(i=0;i<=4;i++)
	{
		if(var3.num[i]>max3)
		{
			max3 = var3.num[i];
		}
	}
	
	//max of all
	max1 = max1>max2 ? max1:max2;
	max1 = max1>max3 ? max1:max3;
	
	cout<<"\nMaximum = "<<max1;
	return 0;
}

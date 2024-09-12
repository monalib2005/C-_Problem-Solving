/*11.Read carefully and complete the code for mentioned task.
class Number
{
	private:
		int num[5];
	public:
		//you can define only static member functions here
};
int main()
{
	Number var1,var2,var3;
	//scan data for 3 objects.
	//Find the largest value among all 15 integers.
}*/
#include<iostream>
using namespace std;

class Number
{
	private:
		int num[5];
	public:
		//you can define only static member functions here
		static void scan(Number &var);
		static int large(Number var);
};

int main()
{
	Number var1,var2,var3;
	int max1,max2,max3;
	cout<<"\nEnter the numbers of var1 = ";
	Number::scan(var1);
	cout<<"\nEnter the number of var2 = ";
	Number::scan(var2);
	cout<<"\nEnter the number of var3 = ";
	Number::scan(var3);
	
	max1 = Number::large(var1);
	max2 = Number::large(var2);
	max3 = Number::large(var3);
	
	max1 = max1>max2 ? max1:max2;
	max1 = max1>max3 ? max1:max3;
	
	cout<<"\nMaximum = "<<max1;
	return 0;
}

void Number::scan(Number &var)
{
	int i;
	for(i=0;i<=4;i++)
	{
		cin>>var.num[i];
	}
}

int Number::large(Number var)
{
	int max = -1;
	int i;
	for(i=0;i<=4;i++)
	{
		if(var.num[i]>max)
		{
			max = var.num[i];
		}
	}
	return max;
}

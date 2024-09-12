/*10.Read carefully and complete the code for mentioned task.
class Number
{
	private:
		int num[5];
	public:
		//your member functions here
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
		//your member functions here
		void scan();
		int large();
};

int main()
{
	Number var1,var2,var3;
	int max1,max2,max3;
	cout<<"\nEnter the numbers of var1 = ";
	var1.scan();
	cout<<"\nEnter the number of var2 = ";
	var2.scan();
	cout<<"\nEnter the number of var3 = ";
	var3.scan();
	
	
	max1 = var1.large();
	max2 = var2.large();
	max3 = var3.large();
	
	max1 = max1>max2 ? max1:max2;
	max1 = max1>max3 ? max1:max3;
	
	cout<<"\nMaximum = "<<max1;
	return 0;
}

void Number::scan()
{
	int i;
	for(i=0;i<=4;i++)
	{
		cin>>num[i];
	}
}
int Number::large()
{
	int max = -1;
	int i;
	for(i=0;i<=4;i++)
	{
		if(num[i]>max)
		{
			max = num[i];
		}
	}
	return max;
}

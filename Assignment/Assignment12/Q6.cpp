/*SECTION-2

Write 2 programs for each of the following questions..
1-Without operator overloading.
2-With operator overloading.
Use both types.(member and independant)

1.Scan 5 distances from user in km,mtr.Find the largest distance.
User may give input in wrong format.e.g. 3 km 2450 mtr*/

#include<iostream>
using namespace std;

class Distance
{
	public:
		int km,mtr;
	public:
	    Distance()
		{
			km = 0;
			mtr = 0;
		}
		void scan()
		{
			cout<<"\nEnter km = ";
			cin>>km;
			cout<<"\nEnter meter = ";
			cin>>mtr;
		}
		void convert()
		{
			mtr = km*1000 + mtr;
		}	
};

int main()
{
	Distance dist[5];
	int i = 0;
	
	
	//scanning
	for(i=0;i<4;i++)
	{
		dist[i].scan();
	}
	
	//convert
	for(i=0;i<4;i++)
	{
		dist[i].convert();
	}
	
	
	//find max;
	int max = dist[0].mtr;
	for(i=0;i<4;i++)
	{
		if(dist[i].mtr>max)
		{
			max = dist[i].mtr;
		}
	}
	
	//printing largest
	max.km = max.km + max.mtr/1000;
	max.mtr = max.mtr%1000;
	
	cout<<"\nlargest distance = ";
	cout<<"\nkm = "<<max.km;
	cout<<"\nmtr = "<<max.mtr;
	
	return 0;
}

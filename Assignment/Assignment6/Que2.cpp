/*Q2.
	class Time
	{
		public:
			int hour,min;
	}
Create 2 objects of class Time.Scan their data.
Convert these objects in total min.Decide which one is greater.
Do not add any member function.*/
#include<iostream>
using namespace std;

class Time
{
	public:
		int hour,min;
};

int main()
{
	Time T1,T2;
	cout<<"\nEnter the hours and min = ";
	cin>>T1.hour>>T1.min;
	cout<<"\nEnter the hours and min = ";
	cin>>T2.hour>>T2.min;
	T1.min = T1.hour*60 + T1.min;
	T2.min = T2.hour*60 + T2.min;
	cout<<"\nThe total in minutes = "<<T1.min;
	cout<<"\nThe total in minutes = "<<T2.min;
	return 0;
}

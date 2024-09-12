/*Q15.
class Time
{
	private:
		int hrs,mins;
}
Scan time for 3 objects from user.
Find the object with largest time.
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)*/
#include<iostream>
using namespace std;

class Time
{
	private:
		int hrs,mins;
		Time()
		{
			cout<<"\nEnter hours = ";
			cin>>hrs;
			cout<<"\nEnter minutes = ";
			cin>>mins;
		}
		int operator>(Time T)
		{
			int t1,t2;
			t1 = hrs * 60 + mins;
			t2 = T.hrs * 60 + T.mins;
			if(t1>t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		int operator<(Time T)
		{
			int t1,t2;
			t1 = hrs * 60 + mins;
			t2 = T.hrs * 60 + T.mins;
			if(t1<t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		friend int main();
};

int main()
{
	Time T1,T2,T3;
	if(T1>T2)
	{
		if(T1>T3)
		{
			cout<<"\nT1 is largest.";
		}
	}
	if(T2>T1)
	{
		if(T2>T3)
		{
			cout<<"\nT2 is largest.";
		}
	}
	else
	{
		cout<<"\nT3 is largest";
	}
	return 0;
}

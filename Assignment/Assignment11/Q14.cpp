/*Q14.
class Time
{
	private:
		int hrs,mins;
}
int main()
{
	Time T1,T2,T3;
	T1.scan();
	T2.scan();
	~T1;
	~T2;
	//~ is overloaded here to convert given time in correct format.
	//if input is 3 hrs 90 mins
	//output will be 4 hrs 30 mins.
	T3 = T1 + T2;
	~T3;
	T3.show();
}*/
#include<iostream>
using namespace std;

class Time
{
	private:
		int hrs,mins;
		Time()
		{
			hrs  = 0;
			mins = 0;
		}
		void scan()
		{
			cout<<"\nEnter hours  = ";
			cin>>hrs;
			cout<<"\nEnter minutes =  ";
			cin>>mins;
		}
		void operator~()
		{
			hrs = hrs + mins/60;
			mins = mins % 60;
		}
		Time operator+(Time T)
		{
			Time ans;
			ans.hrs = hrs + T.hrs;
			ans.mins = mins + T.mins;
			return ans;
		}
		void show()
		{
			cout<<"\n hrs = "<<hrs;
			cout<<"\nmins = "<<mins;
		}
		friend int main();
};
int main()
{
	Time T1,T2,T3;
	T1.scan();
	T2.scan();
	~T1;
	~T2;
	//~ is overloaded here to convert given time in correct format.
	//if input is 3 hrs 90 mins
	//output will be 4 hrs 30 mins.
	T3 = T1 + T2;
	~T3;
	T3.show();
}

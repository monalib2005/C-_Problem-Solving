#include<iostream>
using namespace std;
class Time
{
	private:
		int hour,min;
	public:
	    static void scan(Time &T);
		static void print(Time T);
		static void convert(Time &T);	
};
int main()
{
	Time T1,T2;
	Time::scan(T1);
	Time::convert(T1);
	Time::print(T1);
	Time::scan(T2);
	Time::convert(T2);
	Time::print(T2);
	return 0;
}
void Time::scan(Time &T)
{
	cout<<"\nEnter time = ";
	cin>>T.hour>>T.min;
}
void Time::convert(Time &T)
{
	T.hour = T.hour + T.min/60;
	T.min = T.min%60;
}
void Time::print(Time T)
{
	cout<<"\nT.hour = "<<T.hour;
	cout<<"\nT.min = "<<T.min;
}

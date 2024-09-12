#include<iostream>
using namespace std;
class Distance
{
	private:
		int km,mtr;
		static Distance scan(void);
		void convert();
	public:
	    static void print(Distance &T);	
};
int main()
{
	Distance d1;
	Distance::print(d1);
	return 0;
}

Distance Distance::scan(void)
{
	Distance d;
	cout<<"\nEnter the distance in km and mtr = ";
	cin>>d.km>>d.mtr;
	return d;
}

void Distance::print(Distance &T)
{
	T = Distance::scan();
	T.convert();
	cout<<"\nT.km = "<<T.km;
	cout<<"\nT.mtr = "<<T.mtr;
}
void Distance::convert()
{
	km = km + mtr/1000;
	mtr = mtr%1000;
}

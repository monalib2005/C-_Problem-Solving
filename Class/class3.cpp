#include<iostream>
using namespace std;

class Distance
{
	public:
		int km;
		int mtr;
};

int main()
{
	Distance T1,T2;
	cout<<"Enter the distance in k m and mtr = ";
	cin>>T1.km>>T1.mtr;
	cout<<"Enter the distance in k m and mtr = ";
	cin>>T2.km>>T2.mtr;
	T1.km = T1.km + (T1.mtr/1000);
	T2.mtr = T1.mtr%1000;
	cout<<"T1.km = "<<T1.km;
	cout<<"T2.mtr = "<<T2.mtr;
	return 0;
}

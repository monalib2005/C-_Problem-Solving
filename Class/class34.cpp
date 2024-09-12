#include<iostream>
using namespace std;

class Distance
{
	private:
		int km,mtr;
		void show();
	public:
	void scan();	
};

int main()
{
	Distance d1,d2;
	d1.scan();
	d2.scan();
	//d1.show(); ------>shows error beacuse this is in private
	return 0;
}
void Distance::scan()
{
	cout<<"\nEnter in km and mtr = ";
	cin>>km>>mtr;
	show();
}
void Distance::show()
{
	cout<<"\nkm = "<<km;
	cout<<"\nmtr = "<<mtr;
}

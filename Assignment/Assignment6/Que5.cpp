/*Q5.
	class Distance
	{
		private:
			int km,mtr;
		public:
			void scandata();
			void printdata();
			void convert();
	}
Scan 2 distances from user.Convert them in total meters in convert() function.
Define all member functions outside the class.*/
#include<iostream>
using namespace std;

class Distance
{
	private:
		int km,mtr;
	public:
		void scandata();
		void printdata();
		void convert();
	
};

int main()
{
	Distance d1,d2;
	d1.scandata();
	d1.convert();
	d1.printdata();
	
	d2.scandata();
	d2.convert();
	d2.printdata();
	return 0;
}

void Distance::scandata()
{
	cout<<"\nEnter the km and mtr = ";
	cin>>km>>mtr;
}

void Distance::convert()
{
	km = km + (mtr/1000);
	mtr = mtr%1000;
}
void Distance::printdata()
{
	cout<<"\nThe converted format = ";
	cout<<"\nKm = "<<km;
	cout<<"\nmtr = "<<mtr;
}

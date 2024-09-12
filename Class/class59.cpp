//#include<iostream>
//using namespace std;
//
//class Distance
//{
//	public:
//		int *km;
//		int *mtr;
//};
//
//int main()
//{
//	Distance d1,d2,d3;
//	d1.km = new int(0);
//	d1.mtr = new int(0);
//	d2.km = new int(0);
//	d2.mtr = new int(0);
//	d3.km = new int(0);
//	d3.mtr = new int(0);
//	
//	cout<<"\nEnter the distance in km = ";
//	cin>>*d1.km;
//	cout<<"\nEnter meters = ";
//	cin>>*d1.mtr;
//	
//	cout<<"\nEnter the distance in km = ";
//	cin>>*d2.km;
//	cout<<"\nEnter meters = ";
//	cin>>*d2.mtr;
//	
//	//Addition
//	*d3.km = *d1.km + *d2.km;
//	*d3.mtr = *d1.mtr + *d2.mtr;
//	
//	cout<<"\nThe addition is = ";
//	cout<<"\nkm = "<<*d3.km<<"  "<<"mtr = "<<*d3.mtr;
//	return 0;
//}







//using member function if we make the data
#include<iostream>
using namespace std;

class Distance
{
	public:
		int *km;
		int *mtr;
		
		void scan();
		void add(Distance d1,Distance d2);
		void print();
};

int main()
{
	Distance d1,d2,d3;
	d1.scan();
	d2.scan();
	d3.add(d1,d2);
	d3.print();
	return 0;
}

void Distance::scan()
{
	km = new int(0);
	mtr = new int(0);
	
	cout<<"\nEnter the distance in km = ";
	cin>>*km;
	cout<<"\nEnter the distance in mtr = ";
	cin>>*mtr;
}

void Distance::add(Distance d1,Distance d2)
{
	//allocating memory to d3
	km = new int(0);
	mtr = new int(0);
	
	*km = *d1.km + *d2.km;
	*mtr = *d1.mtr + *d2.mtr;
}

void Distance::print()
{
	cout<<"\nkm = "<<*km<<"  "<<"mtr = "<<*mtr;
}

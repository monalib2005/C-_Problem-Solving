#include<iostream>
using namespace std;

class Distance
{
	private:
		int km,mtr;
	public:
	void scan()
	{
		cout<<"\nEnter distance = ";
		cin>>km>>mtr;
	}
	void print()
	{
		cout<<"\nkm = "<<km;
		cout<<"\nmtr = "<<mtr;
	}	
};

int main()
{
	Distance d1,d2;
	cout<<"\nEnter distance in k  and mtr = ";
	//cin>>d1.km>>d1.mtr; --->error
	d1.scan();
	d2.scan();
	d1.print();
	d2.print();
	return 0;
}
//void show(Distance temp)
//{
//	cout<<temp.km<<Temp.mtr;
//}

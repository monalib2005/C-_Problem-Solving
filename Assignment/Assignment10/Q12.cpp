/*2.
class Distance
{
	private:
		int km,mtr;
	public:
		//your member functions.
};
Create 2 runtime objects in main().Scan and print their data.*/
#include<iostream>
using namespace std;

class Distance
{
	public:
		int km,mtr;
	public:
	    void scan()
		{
			cout<<"\nEnter km = ";
			cin>>km;
			cout<<"\nEnter meters = ";
			cin>>mtr;
		}
		void show()
		{
			cout<<"\nkm = "<<km;
			cout<<"\nmtr = "<<mtr;
		}	
}; 

int main()
{
	Distance *p,*q;
	p = new Distance();
	q = new Distance();
	p->scan();
	q->scan();
	
	p->show();
	q->show();
	return 0;
}

//scan 3 distances from user and find the largest one.
#include<iostream>
using namespace std;

class Distance
{
	private:
		int km,mtr;
		
		Distance()
		{
			km = 0;
			mtr = 0;
		}
		
		friend istream& operator>>(istream &din,Distance &D);
		friend ostream & operator<<(ostream &dout,Distance D);
		
		int operator>(Distance D);
		
		friend int main();
};

int main()
{
	Distance D1,D2,D3;
	Distance max;
	cout<<"\nEnter the distances = ";
	cin>>D1>>D2>>D3;
	
	max = D1>D2 ? D1 : D2;
	max = D3>max ? D3 : max;
	
	cout<<"\nLargest distance = "<<max;
	return 0;
}

istream& operator>>(istream &din,Distance &D)
{
	cin>>D.km>>D.mtr;
	return din;
}

ostream & operator<<(ostream &dout,Distance D)
{
	cout<<"\nkm = "<<D.km<<"  "<<"mtr = "<<D.mtr;
	return dout;
}

int Distance::operator>(Distance D)
{
	int t1,t2;
	t1 = km * 1000 + mtr;
	t2 = D.km *1000 + D.mtr;
	
	if(t1>t2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

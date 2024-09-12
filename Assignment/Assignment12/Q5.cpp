/*5.
class Distance
{
	private:
		int km,mtr;
};

int main()
{
	Distance D1,D2,D3;
	if(D1>D2 && D1>D3)
	{
		cout<<"Largest distance is = "<<D1;
	}
	else if( D2>D1 && D2>D3 )
	{
		cout<<"\nLargest distance is = "<<D2;
	}
	else
	{
		cout<<"\nLargest distance is "<<D3;
	}
}*/

#include<iostream>
using namespace std;

class Distance
{
	private:
		int km,mtr;
	public:
	    Distance()
		{
			cout<<"\nEnter km  = ";
			cin>>km;
			cout<<"\nEnter meter = ";
			cin>>mtr;
		}
		int operator>(Distance D);
		friend ostream& operator<<(ostream &dout,Distance D);
};

int main()
{
	Distance D1,D2,D3;
	if(D1>D2 && D1>D3)
	{
		cout<<"Largest distance is = "<<D1;
	}
	else if( D2>D1 && D2>D3 )
	{
		cout<<"\nLargest distance is = "<<D2;
	}
	else
	{
		cout<<"\nLargest distance is "<<D3;
	}
}

ostream& operator<<(ostream &dout,Distance D)
{
	cout<<"\nkm = "<<D.km<<"  "<<"mtr = "<<D.mtr;
}

int Distance::operator>(Distance D)
{
	int t1,t2;
	t1 = km*1000 + mtr;
	t2 = D.km*1000 + D.mtr;
	
	if(t1>t2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//scan 6 distances from user and find smallest one.
#include<iostream>
using namespace std;

class Distance
{
	private:
		int km,mtr;
		Distance()
		{
			km = 0;
			mtr  = 0;
		}
		
		int operator>(Distance D)
		{
			int t1,t2;
			t1 = km *100 + mtr;
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
		
		friend istream& operator>>(istream &din,Distance &D);
		friend ostream& operator<<(ostream &dout,Distance D);
		friend int main();
};

int main()
{
	Distance dist[6];
	Distance min;
	int i;
	cout<<"\nEnter data = ";
	for(i=0;i<6;i++)
	{
		cin>>dist[i];
	}
	min = dist[0];
	
	for(i=0;i<6;i++)
	{
		if(min>dist[i])
		{
			min = dist[i];
		}
	}
	cout<<"\nSmallest distance = "<<min;
	return 0;
}

istream& operator>>(istream &din,Distance &D)
{
	cout<<"\nEnter km = ";
	cin>>D.km;
	cout<<"\nEnter mtr = ";
	cin>>D.mtr;
	return din;
}

ostream& operator<<(ostream &dout,Distance D)
{
	cout<<"\nkm = "<<D.km<<"  "<<"mtr = "<<D.mtr;
	return dout;
}

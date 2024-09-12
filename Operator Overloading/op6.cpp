//scan 8 distances from user and sort them in ascending order.
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
		
		int operator>(Distance D)
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
		
		friend istream& operator>>(istream &din,Distance &D);
		friend ostream& operator<<(ostream &dout,Distance D);
		friend int main();
};

int main()
{
	Distance dist[8],temp;
	int i,j;
	cout<<"\nEnter data:";
	for(i=0;i<8;i++)
	{
		cin>>dist[i];
	}
	
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if(dist[i]>dist[j])
			{
				temp = dist[i];
				dist[i]= dist[j];
				dist[j] = temp;
			}
		}
	}
	
	for(i=0;i<8;i++)
	{
		cout<<dist[i];
	}
	return 0;
}

istream& operator>>(istream &din,Distance &D)
{
	cout<<"\nEnter km = ";
	cin>>D.km;
	cout<<"\nEnter meter = ";
	cin>>D.mtr;
	return din;
}

ostream& operator<<(ostream &dout,Distance D)
{
	dout<<"\nkm = "<<D.km<<"  "<<"mtr = "<<D.mtr;
	return dout;
}

//2.Scan 6 distances from user.Sort them in asending order.

#include<iostream>
using namespace std;

//with operator overloading
class Distance
{
	private:
		int km,mtr;
	public:
	    
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
	    
        friend istream& operator>>(istream &din,Distance &d);
        friend ostream& operator<<(ostream &dout,Distance d);
			
};

int main()
{
	Distance dist[6];
	int i,j;
	for(i=0;i<6;i++)
	{
		cin>>dist[i];
	}
	
	Distance temp;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(dist[i]>dist[j])
			{
				temp = dist[i];
				dist[i] = dist[j];
				dist[j] = temp;
			}
		}
	}
	
	for(i=0;i<6;i++)
	{
		cout<<dist[i];
	}
	return 0;
}

istream& operator>>(istream &din,Distance &d)
{
	cout<<"\nEnter km = ";
	cin>>d.km;
	cout<<"\nEnter meter = ";
	cin>>d.mtr;
	return din;
}

ostream& operator<<(ostream &dout,Distance d)
{
	cout<<"\nkm = "<<d.km<<"  "<<"mtr = "<<d.mtr;
}

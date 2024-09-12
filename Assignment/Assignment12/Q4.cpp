/*4.
class Distance
{
	private:
		int km,mtr;
};
int main()
{
	Distance D1,D2;
	cin>>D1>>D2;
	if(D1>D2)
	{
		cout<<"D1 > D2";
	}
	else
	{
		cout<<"D1 < D2";
	}
};*/

#include<iostream>
using namespace std;

class Distance
{
	private:
		int km,mtr;
	public:
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
		
		friend 	istream& operator>>(istream &din,Distance &T);
		friend ostream& operator<<(ostream &dout,Distance T);
};
int main()
{
	Distance D1,D2;
	cin>>D1>>D2;
	if(D1>D2)
	{
		cout<<"D1 > D2";
	}
	else
	{
		cout<<"D1 < D2";
	}
};

istream& operator>>(istream &din,Distance &T)
{
	cout<<"\nEnter km = ";
	cin>>T.km;
	cout<<"\nEnter meter = ";
	cin>>T.mtr;
	return din;
}

ostream& operator<<(ostream &dout,Distance T)
{
	cout<<"\nkm = "<<T.km<<"  "<<"mtr = "<<T.mtr;
	return dout;
}

//scan 8 distances from user and convert them in proper format.
//scan one more distance and search it in your array.
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
		
		int operator==(Distance D)
		{
			int t1,t2;
			t1 = km*1000 + mtr;
			t2 = D.km*1000 + D.mtr;
			
			if(t1 == t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		friend istream& operator>>(istream &,Distance &);
		friend ostream& operator<<(ostream &,Distance );
		friend int main();
		friend void operator~(Distance &D);
		
};

//void operator~(Distance &D);

int main()
{
	Distance dist[8];
	int i;
	for(i=0;i<8;i++)
	{
		cin>>dist[i];
	}
	
	//converting
	for(i=0;i<8;i++)
	{
		~dist[i];
	}
	
	//distance to be searched
	Distance input;
	cin>>input;
	~input;
	
	for(i=0;i<8;i++)
	{
		if(dist[i] == input)
		{
			cout<<"\nfound";
			break;
		}
	}
	if(i == 8)
	{
		cout<<"\nnot found.";
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

void operator~(Distance &D)
{
	D.km = D.km + (D.mtr/1000);
	D.mtr = D.mtr % 1000;
}

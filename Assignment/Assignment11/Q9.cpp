/*Q9.
Complete the code using operator overloading for following main() function.
class Distance
{
	public:
		int km;
		int mtr;
};

int main()
{
	Distance D1,D2;
	~D1;
	~D2;
	//Above 2 statements should scan data for D1 and D2.
	if(D1 == D2)
	{
		cout<<"Both distances are equal";
	}
	ilse if(D1>D2)
	{
		cout<<"D1 > D2";
	}
	else if(D1<D2)
	{
		cout<<"D1<D2";
	}
}*/

#include<iostream>
using namespace std;

class Distance
{
	public:
		int km;
		int mtr;
		Number()
		{
			km = 0;
			mtr = 0;
		}
		void operator~()
		{
			cout<<"\nEnter km = ";
			cin>>km;
			cout<<"\nEnter mtr = ";
			cin>>mtr;
		}
		int operator==(Distance D)
		{
		    int t1,t2;
		    t1 = km * 1000 + mtr;
		    t2 = D.km * 1000 + D.mtr;
		    if(t1 == t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
        }
        int operator>(Distance D)
		{
		    int t1,t2;
		    t1 = km * 1000 + mtr;
		    t2 = D.km * 1000 + D.mtr;
		    if(t1 > t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
        }
        int operator<(Distance D)
		{
		    int t1,t2;
		    t1 = km * 1000 + mtr;
		    t2 = D.km * 1000 + D.mtr;
		    if(t1 < t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
        }
};
int main()
{
	Distance D1,D2;
	~D1;
	~D2;
	//Above 2 statements should scan data for D1 and D2.
	if(D1 == D2)
	{
		cout<<"Both distances are equal";
	}
	else if(D1>D2)
	{
		cout<<"D1 > D2";
	}
	else if(D1<D2)
	{
		cout<<"D1<D2";
	}
}

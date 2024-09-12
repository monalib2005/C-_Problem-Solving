/*Q11.
class Distance
{
	public:
		int km;
		int mtr;
};
int main()
{
	Distance D1,D2;
	cout<<"Enter 2 distances = ";
	cin>>D1>>D2;
	if(D1 == D2)	
	{
		cout<<"\nBoth distances are equal";
	}
	else
	{
		cout<<"\nNot equal";
	}
}*/
#include<iostream>
using namespace std;

class Distance
{
	public:
		int km;
		int mtr;
		Distance()
		{
			km = 0;
			mtr = 0;
		}
		void operator>>(Distance D)
		{
			cout<<"\nEnter km = ";
			cin>>km;
			cout<<"\nEnter mtr = ";
			cin>>mtr;
			cout<<"\nEnter km = ";
			cin>>D.km;
			cout<<"\nEnter mtr = ";
			cin>>D.mtr;
		}
		int operator==(Distance D)
		{
			int t1,t2;
			t1 = km*1000 + mtr;
			t2 = D.km * 1000 + D.mtr;
			if(t1==t2)
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
	cout<<"Enter 2 distances = ";
	cin>>D1>>D2;
	if(D1 == D2)	
	{
		cout<<"\nBoth distances are equal";
	}
	else
	{
		cout<<"\nNot equal";
	}
}

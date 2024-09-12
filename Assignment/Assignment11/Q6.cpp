/*Q6.Complete the code for following main() function.
class Distance
{
	int inch,feet;
};
int main()
{
	Distance D1,D2;
	scan(D1);
	D2.scan();
	~D1;
	~D2;
	//~ operator is used here to convert distance in proper format
	//e.g. input = 3 feet 27 inch
	//output = 5 feet 3 inches
	D3 = D1 + D2;
	~D3;
	D3.show();*/
#include<iostream>
using namespace std;

class Distance
{
	int inch,feet;
	Distance()
	{
		inch = 0;
		feet = 0;
	}
	void scan()
	{
		cout<<"\nENter feet = ";
		cin>>feet;
		cout<<"\nENter inch = ";
		cin>>inch;
	}
	void operator~()
	{
		feet = feet + (inch/12);
		inch = inch % 12;
	}
	Distance operator+(Distance temp)
	{
		Distance ans;
		ans.feet = feet + temp.feet;
		ans.inch = inch + temp.inch;
		return ans;
	}
	void show()
	{
		cout<<feet<<" feet "<<inch<<" inch\n";
	}
	friend int main();
	friend void scan(Distance &T);
};

void scan(Distance &T);

int main()
{
	Distance D1,D2,D3;
	scan(D1);
	D2.scan();
	~D1;
	~D2;
	//~ operator is used here to convert distance in proper format
	//e.g. input = 3 feet 27 inch
	//output = 5 feet 3 inches
	D3 = D1 + D2;
	~D3;
	D3.show();
}

void scan(Distance &T)
{
	cout<<"\nEnter feet = ";
	cin>>T.feet;
	cout<<"\nEnter inch = ";
	cin>>T.inch;
}

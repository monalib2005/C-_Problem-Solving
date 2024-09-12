//10.WAP to understand setw() and endl.
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int x,y;
	cout<<"\nEnter a number = ";
	cin>>x>>y;
	
	cout<<"\no/p 1 = "<<endl;
	cout<<setw(4)<<x;
	cout<<"\no/p 2 = "<<endl;
	cout<<endl<<setw(10)<<x<<endl;
	cout<<"\no/p 3 = "<<endl;
	cout<<setw(10)<<x<<setw(15)<<y<<endl;
	cout<<"\no/p 4 = "<<endl;
	cout<<setw(15)<<x<<y;
	return 0;
}

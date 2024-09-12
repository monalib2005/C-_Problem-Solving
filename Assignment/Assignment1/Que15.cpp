#include<iostream>
using namespace std;
//Q15.Scan length and width of a rectangle from user.Check if it is square or rectangle.
int main()
{
	int length,width;
	cout<<"\nEnter the length and width respectively = ";
	cin>>length>>width;
	
	if(length==width)
	{
		cout<<"\nIt is square.";
	}
	else
	{
		cout<<"\nIt is rectangle.";
	}
	return 0;
}

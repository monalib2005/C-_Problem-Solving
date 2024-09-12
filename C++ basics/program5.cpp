#include<iostream>
using namespace std;

int main()
{
	//checking square or rectangle
	int length,width;
	
	cout<<"\nEnter the length = ";
	cin>>length;
	cout<<"\nEnter the width = ";
	cin>>width;
	
	length == width ? cout<<"It is square" : cout<<"It is a rectangle";
	return 0;
}


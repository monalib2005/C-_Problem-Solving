#include<iostream>
using namespace std;
void area(int a , int b);
void perimeter(int a , int b);
int main()
{
	int length,width;
	cout<<"Enter the length and width respectively = ";
	cin>>length>>width;
	area(length,width);
	perimeter(length,width);
}

void area(int a , int b)
{
	int Area;
	Area = a * b;
	cout<<Area<<"\n";
}

void perimeter(int a , int b)
{
	int peri;
	peri = 2*(a + b);
	cout<<peri;
}

/*6.Scan length and width of a rectangle.Find area and perimeter of rectangle.
Write 3 programs for following 3 methods.
-parameter passing by value*/
#include<iostream>
using namespace std;
int area(int l,int w);
int perimeter(int l,int w);
int main()
{
	int ar,peri;
	int length,width;
	cout<<"\nEnter the length and width = ";
	cin>>length>>width;
	ar = area(length,width);
	peri = perimeter(length,width);
	cout<<"Area = "<<ar<<" "<<"Perimeter = "<<peri;
	return 0;
}
int area(int l,int w)
{
	return l*w;
}
int perimeter(int l,int w)
{
	return 2*(l+w);
}

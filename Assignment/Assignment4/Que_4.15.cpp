/*15.Scan length and width of rectangle in main().Define function rectangle() to find area and perimeter of rectangle.
Use parameter passing by reference.*/
#include<iostream>
using namespace std;
void rectangle(int l,int w,int &refarea,int &refperi);
int main()
{
	int length,width;
	int area,peri;
	cout<<"Enter the length and width = ";
	cin>>length>>width;
	rectangle(length,width,area,peri);
	cout<<"\nArea = "<<area;
	cout<<"\nPerimeter = "<<peri;
}
void rectangle(int l,int w,int &refarea,int &refperi)
{
	refarea = l * w;
	refperi = 2*(l+w);
}

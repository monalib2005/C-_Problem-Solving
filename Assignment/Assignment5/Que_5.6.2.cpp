/*6.Scan length and width of a rectangle.Find area and perimeter of rectangle.
Write 3 programs for following 3 methods.
-parameter passing by address*/
#include<iostream>
using namespace std;
void area(int l,int w,int *parea,int *peri );
int main()
{
	int ar,peri;
	int length,width;
	cout<<"Enter the length and width = ";
	cin>>length>>width;
	area(length,width,&ar,&peri);
	cout<<"Area = "<<ar<<" "<<"Perimeter = "<<peri;
	return 0;
}
void area(int l,int w,int *parea,int *pperi )
{
	*parea = l*w;
	*pperi = 2*(l+w);
}

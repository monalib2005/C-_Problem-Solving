//16.Repeat question 15.Use parameter passing by address.
#include<iostream>
using namespace std;
void rectangle(int l,int w,int *parea,int *pperi);
int main()
{
	int length,width;
	int area,peri;
	cout<<"\nEnter the value of length and width = ";
	cin>>length>>width;
	rectangle(length,width,&area,&peri);
	cout<<"\nArea = "<<area;
	cout<<"\nPerimeter = "<<peri;
	return 0;
}
void rectangle(int l,int w,int *parea,int *pperi)
{
	*parea = l*w;
	*pperi = 2*(l+w);
}

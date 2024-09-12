#include<iostream>
using namespace std;
void rectangle(int l,int w,int &refarea,int &refcircum);
int main()
{
	int length,width;
	int area,peri;
	cout<<"Enter the length and width = ";
	cin>>length>>width;
	rectangle(length,width,area,peri);
	cout<<"\nArea = "<<area;
	cout<<"\nPerimter = "<<peri;
	return 0;
}
void rectangle(int l,int w,int &refarea,int &refcircum)
{
	refarea = l*w;
	refcircum = 2*(l+w);
}

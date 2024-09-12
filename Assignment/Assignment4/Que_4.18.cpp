//18.Repeat Q17.Use parameter passing by address.
#include<iostream>
using namespace std;
void circle(int rad,float *parea,float *pfcircum);
int main()
{
	int radius;
	float area,circum;
	cout<<"Enter the radius = ";
	cin>>radius;
	circle(radius,&area,&circum);
	cout<<"\nArea = "<<area;
	cout<<"\nCircumference = "<<circum;
	return 0;
}
void circle(int rad,float *parea,float *pcircum)
{
	*parea = 3.14*rad*rad;
	*pcircum = 2*3.14*rad;
}

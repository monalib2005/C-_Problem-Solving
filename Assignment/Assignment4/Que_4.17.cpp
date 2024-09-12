/*17.Scan radius of circle from user in main().Define function circle() to find area and circumference of circle.
Use parameter passing by reference.*/
#include<iostream>
using namespace std;
void circle(int rad,float &refarea,float &refcircum);
int main()
{
	int radius;
	float area,circum;
	cout<<"Enter the radius = ";
	cin>>radius;
	circle(radius,area,circum);
	cout<<"\nArea = "<<area;
	cout<<"\nCircumference = "<<circum;
	return 0;
}
void circle(int rad,float &refarea,float &refcircum)
{
	refarea = 3.14*rad*rad;
	refcircum = 2*3.14*rad;
}

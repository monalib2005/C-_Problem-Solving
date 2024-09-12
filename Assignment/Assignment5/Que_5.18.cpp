/*18.Scan radius from user.Find area and circumference using following 3 methods.
-pass by value
-pass by reference
-pass by address.*/
#include<iostream>
using namespace std;
float Circum(int rad);
float Area(int rad);
void circle(int rad,float &refarea,float &refcircum);
void circle(int rad,float *parea,float *pcircum);
int main()
{
	int radius;
	float area,circum;
	cout<<"\nEnter the radius = ";
	cin>>radius;
	area = Area(radius);
	circum = Circum(radius);
	cout<<"Area = "<<area;
	cout<<"\nCircumference = "<<circum;
	
	//by reference
	circle(radius,area,circum);
	cout<<"\nArea = "<<area;
	cout<<"\nCircumference = "<<circum;
	
	//by address
	circle(radius,&area,&circum);
	cout<<"\nArea = "<<area;
	cout<<"\nCircumference = "<<circum;
	return 0;
}
float Area(int rad)
{
	return 3.14*rad*rad;
}
float Circum(int rad)
{
	return 2*rad*3.14;
}

 //by refernce
void circle(int rad,float &refarea,float &refcircum)
{
	refarea = 3.14*rad*rad;
	refcircum = 2*3.14*rad;
}

//by address
void circle(int rad,float *parea,float *pcircum)
{
	*parea = 3.14*rad*rad;
	*pcircum = 2*3.14*rad;
}


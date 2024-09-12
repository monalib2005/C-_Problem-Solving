#include<iostream>
using namespace std;
void circle(int r,float &refarea,float &refcircum);
int main()
{
	int rad = 10;
	float area, circum;
	circle(rad,area,circum);
	cout<<"\nArea = "<<area;
	cout<<"\nCircumference = "<<circum;
	return 0;
}
void circle(int r,float &refarea,float &refcircum)
{
	refarea = 3.14*r*r;
	refcircum = 2*3.14*r;
}

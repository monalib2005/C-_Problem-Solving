//Scan radius of a circle from user.Find area and circumference of circle.

#include<iostream>
using namespace std;

int main()
{
	int radius;
	int area,circum;
	cout<<"enter radius = ";
	cin>>radius;
	
	area = 3.14 *radius*radius;
	circum = 2*3.14*radius;
	
	cout<<"Area = "<<area<<"\n";
	cout<<"Circumference = "<<circum;
	
	return 0;
}

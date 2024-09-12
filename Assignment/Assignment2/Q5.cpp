//Scan length and width of rectangle from user.Find area and perimeter of rectangle.
#include<iostream>
using namespace std;

int main()
{
    int length,width;
	int area,perimeter;
	cout<<"enter length = ";
	cin>>length;
	cout<<"enter width = ";
	cin>>width;
	
	area = length* width;
	perimeter = 2*(length + width);
	cout<<"Area = "<<area<<"\n";
	cout<<"perimter = "<<perimeter;	
	
	return 0;
}

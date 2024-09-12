#include<iostream>
using namespace std;
/*Q11.Scan length and width of a rectangle , find area and perimeter of rectangle.
If area is greater than 100, print message "Big rectangle" else print message 
"Small Rectangle"*/
int main()
{
	int length,width;
	int area,peri;
	
	cout<<"\nEnter length = ";
	cin>>length;
	cout<<"\nEnter width = ";
	cin>>width;
	
	area = length * width;
	peri = 2*(length+width);
	
	cout<<"\nThe area is "<<area;
	cout<<"\nThe perimeter is "<<peri;
	
	area>100 ? cout<<"\nBig rectangle." : cout<<"\nSmall rectangle.";
	return 0;
}

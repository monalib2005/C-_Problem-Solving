//Q15.Write a menu driven program to find area of rectangle,perimeter of rectangle.
#include<iostream>
using namespace std;

int main()
{
	int choice;
	int length,width;
	int area,peri;
	cout<<"\n1-area\n2-perimeter.";
	cout<<"\nEnter your choice = ";
	cin>>choice;
	cout<<"\nEnter your length and width = ";
	cin>>length>>width;
	switch(choice)
	{
		case 1:
			area = length * width;
			cout<<"\nArea = "<<area;
			break;
	    case 2:
		    peri = 2*(length + width);
			cout<<"perimeter = "<<peri;
			break;
		default:
		cout<<"\nwrong input.";	 		
	}
	return 0;
}

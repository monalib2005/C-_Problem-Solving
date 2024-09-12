#include<iostream>
using namespace std;
/*Q12.Scan radius of a circle from user.Find area and circumference of circle.
If area of circle is greater than 50,print how much it is greater than 50.
If area is smaller than 50,print how much it is smalller than 50.
Print every message properly.*/
int main()
{
	int rad;
	float area,circum;
	cout<<"\nEnter radius = ";
	cin>>rad;
	
	area = 3.14*rad*rad;
	circum = 2*3.14*rad;
	
	cout<<"\nThe area is "<<area;
	cout<<"\nThe perimeter is "<<circum;
	
	area > 50 ? cout<<"\nhow much it is greater than 50." : cout<<"\nhow much it is smaller than 50.";
	return 0;
}

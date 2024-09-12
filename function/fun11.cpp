#include<iostream>
using namespace std;
float area(int radius);
float circum(int radius);
int main()
{
	int rad;
	cout<<"\nEnter the radius = ";
	cin>>rad;
	float res1,res2;
	res1 = area(rad);
	res2 = circum(rad);
	cout<<"\nArea = "<<res1;
	cout<<"\nCircumfernce = "<<res2;
	return 0;
}
float area(int radius)
{
	float Area;
	Area = 3.14*radius*radius;
	return Area;
}
float circum(int radius)
{
	float circumf;
	circumf = 2*3.14*radius;
	return circumf;
}

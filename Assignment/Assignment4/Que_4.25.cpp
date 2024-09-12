/*B)Do not change main() function.	
	int main()
	{
		int a,b;
		getdata(&a,&b); //this function scans data for its parameters.
		int sq,cu;
		sq = square(a);
		cu = cube(&a);
		cout<<"\nSquare = "<<sq<<" Cube = "<<cu;
	}*/
#include<iostream>
using namespace std;
void getdata(int *pa,int *pb);
int square(int x);
int cube(int *y);
int main()
 {
 	int a,b;
	getdata(&a,&b); //this function scans data for its parameters.
	int sq,cu;
	sq = square(a);
	cu = cube(&a);
	cout<<"\nSquare = "<<sq<<" Cube = "<<cu;
 	return 0;
 }
 void getdata(int *pa,int *pb)
 {
 	cout<<"\nEnter the values of a and b = ";
 	cin>>*pa>>*pb;
 }
 int square(int x)
 {
 	return x*x;
 }
 int cube(int *y)
 {
 	return *y * *y * *y;
 }

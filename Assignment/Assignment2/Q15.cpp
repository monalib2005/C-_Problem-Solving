//15.Complete the following main() function.
//	int main()
//	{
//		float x,y;
//	}
//-store address of x in px and address of y in py.
//-scan x and y using px and py
//-print addition of x and y using px and py

#include<iostream>
using namespace std;

int main()
{
	float x,y;
	float *px,*py;
	px = &x;
	py = &y;
	
	cout<<"Enter value of x = ";
	cin>>*px;
	cout<<"Enter the value of y = ";
	cin>>*py;
	cout<<"Addition = "<<*px + *py; 
	
	
	return 0;
}

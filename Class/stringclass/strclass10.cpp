//Array of Objects.
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

int main()
{
	int i;
	Number num[3];
	for(i=0;i<=2;i++)
	{
		cout<<"Enter the input of x and y ";
		cin>>num[i].x;
		cin>>num[i].y;
	}
	for(i=0;i<=2;i++)
	{
		cout<<"The value of x and y in "<<i<<" index";
		cout<<"\nx = "<<num[i].x<<"  "<<"y = "<<num[i].y<<"\n";

	}
	return 0;
}

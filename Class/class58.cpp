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
	Number myvar[4];
	cout<<"\nENter the number = ";
	for(i=0;i<=3;i++)
	{
		cin>>myvar[i].x;
		cin>>myvar[i].y;
	}
	for(i=0;i<=3;i++)
	{
		cout<<myvar[i].x;
		cout<<myvar[i].y;
	}
	return 0;
}

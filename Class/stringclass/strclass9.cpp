//Array within class
#include<iostream>
using namespace std;
class Number
{
	public:
		int num[4];
};
int main()
{
	int i;
	Number num1;
	cout<<"Enter the input = ";
	for(i=0;i<=3;i++)
	{
		cin>>num1.num[i];
	}
	cout<<"The values are = ";
	for(i=0;i<=3;i++)
	{
		cout<<num1.num[i];
	}
	return 0;
}

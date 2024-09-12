//11.Write a program to explain all rules of references in CPP.
#include<iostream>
using namespace std;

int main()
{
	/*int x = 10;
	int &y = x;
	int &w=y;
	cout<<x<<" "<<y<<"\n";
	y=7;
	cout<<x<<" "<<y<<"\n";
	cout<<x<<" "<<y<<" "<<w;*/
	
	/*int num[3] = {23,342,32};
	int & y = num[0];
	y = 9;
	for(int i = 0;i<=2;i++)
	{
		cout<<num[i]<<"\n";
	}*/
	
	int x = 4;
	int y =56;
	int *p;
	p = & x;
	int * &q = p;
	*q = 89;
	cout<<x;
	q = &y;
	*p = 76;
	cout<<y; 
	return 0;
}

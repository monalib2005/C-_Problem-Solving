/*9.Scan an array of 5 integers.Print this array.
Define function for each task.We have seen how to pass array to function.
Please refer notebook.*/
#include<iostream>
using namespace std;
void scan(int *ptr);
void print(int *ptr);
int main()
{
	int num[5];
	int *p;
	p = &num[0];
	scan(p);
	print(p);
	return 0;
}
void scan(int *ptr)
{
	int i;
	cout<<"\nEnter the values of array = ";
	for(i=0;i<=4;i++)
	{
		cin>>*(ptr+i);
	}
}
void print(int *ptr)
{
	int i;
	cout<<"the value of array are = ";
	for(i=0;i<=4;i++)
	{
		cout<<*(ptr+i)<<"\n";
	}
}

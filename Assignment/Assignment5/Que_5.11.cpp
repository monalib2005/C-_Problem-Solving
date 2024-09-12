/*11.Scan array of n characters from user.Count number of alphabets user has entered in array.
Define function for each task.We have seen how to pass array to function.
Please refer notebook.*/
#include<iostream>
using namespace std;
void scan(char *ptr,int n);
int count(char *p,int n);
int main()
{
	int n;
	char *p;
	int c;
	cout<<"Enter the value of n = ";
	cin>>n;
	p = new char[n];
	scan(p,n);
	c=count(p,n);
	cout<<"The count is = "<<c;
	return 0;
}
void scan(char *ptr,int n)
{
	int i;
	cout<<"\nEnter the values of array = ";
	for(i=0;i<=n-1;i++)
	{
		cin>>*(ptr+i);
	}
}
int count(char *p,int n)
{
	int i;
	int counter=0;
	for(i=0;i<=n-1;i++)
	{
		counter ++;
	}
	return counter;
}

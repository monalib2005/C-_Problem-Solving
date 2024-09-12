//5.Scan array of 4 alphabets from user.Print ascii value of each alphabet in array.
//([] notation)
#include<iostream>
using namespace std;

int main()
{
	int i;
	char char1[4];
	cout<<"Enter the values of a charcter = ";
	for(i=0;i<=3;i++)
	{
		cin>>char1[i];
	}
	for(i = 0;i<=3;i++)
	{
		cout<<"The ascii value of "<<char1[i]<<" "<<(int)char1[i]<<"\n";
	}
	return 0;
}

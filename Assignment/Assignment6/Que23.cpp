/*7.Scan array of n characters from user.Count uppercase and lowercase
alphabets.Define function for each task.*/
#include<iostream>
using namespace std;
void scan(char *ptr,int n);
void check(char *ptr,int n);
int main()
{
	int n;
	char *p;
	cout<<"\nThe value of n = ";
	cin>>n;
	p = new char[n];
	scan(p,n);
	check(p,n);
	return 0;
}
void scan(char *ptr,int n)
{
	int i;
	cout<<"\nEnter the values = ";
	for(i=0;i<=n-1;i++)
	{
		cin>>*(ptr+i);
	}
}
void check(char *ptr,int n)
{
	int i;
	int count1 = 0;
	int count2 = 0;
	for(i=0;i<=n-1;i++)
	{
		if(*(ptr+i)>='A' && *(ptr+i)<='Z')
		{
			count1++;
	    }
	    else if(*(ptr+i)>='a' && *(ptr+i)<='z')
		{
			count2++;
		}
		else
		{
			cout<<"\nEnter alphabet.";
		}
	}
	cout<<"\nLowercase = "<<count2;
	cout<<"\nuppercase = "<<count1;  
}

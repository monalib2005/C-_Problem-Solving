#include<iostream>
using namespace std;
/*Q14.Scan a gender from user.If user enters M , print male.
If user enter F, print female.Otherwise print wrong input.*/
int main()
{
	char gen;
	cout<<"\nEnter your gender = ";
	cin>>gen;
	
	if(gen == 'M')
	{
		cout<<"\nMale";
	}
	else if(gen == 'F')
	{
		cout<<"\nFemale";
	}
	else
	{
		cout<<"\nWrong input";
	}
	return 0;
}

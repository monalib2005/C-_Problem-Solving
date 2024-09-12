//Q8.Scan gender and age of candidate from user.Check if he/she is able to marry or not.

#include<iostream>
using namespace std;

int main()
{
	char gen;
	int age;
	cout<<"F - female"<<"\n";
	cout<<"M - Male"<<"\n";
	cout<<"Enter gender in M or F = ";
	cin>>gen;
	cout<<"enter age = ";
	cin>>age;
	
	if(gen == 'F')
	{
		if(age>=18)
		{
			cout<<"She is able to marry.";
		}
		else
		{
			cout<<"She is not able to marry.";
		}
	}
	
	if(gen == 'M')
	{
		if(age>=21)
		{
			cout<<"He can marry";
			
		}
		else
		{
			cout<<"He is not able to marry.";
		}
	}
	return 0;
}

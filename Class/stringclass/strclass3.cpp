//scan three city names from user and check if user has given Pune or not
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char c1[10],c2[10],c3[10];
	cout<<"Enter the city names = ";
	cin.getline(c1,10);
	cin.getline(c2,10);
	cin.getline(c3,10);
	
	if(strcmp(&c1[0],"Pune")==0)
	{
		cout<<"First city is pune.";
	}
	if(strcmp(&c2[0],"Pune")==0)
	{
		cout<<"Second city is pune.";
	}
	if(strcmp(&c3[0],"Pune")==0)
	{
		cout<<"Third city is Pune.";
	}
	else
	{
		cout<<"No city is found.";
	}
	return 0;
}

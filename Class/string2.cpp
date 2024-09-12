#include<iostream>
using namespace std;

int main()
{
	string s1,s2;
	cout<<"\nEnter the strings = ";
	getline(cin,s1);
	//getline(cin,s2);
	
	cout<<"\ns1 = "<<s1;
	s1.clear();
	bool res = s1.empty();
	if(res == true)
	{
		cout<<"\nYes it is empty.";
	}
	else
	{
		cout<<"\nNot empty.";
	}
}

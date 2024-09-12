#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	cout<<"\nEnter string ";
	getline(cin,s1);
	getline(cin,s2);
	
	cout<<"\nS1 = "<<s1;
	s1.clear();
	cout<<"\ns1 = "<<s1;
	return 0;
}

#include<iostream>
using namespace std;
void scan(int &refnum1,int &refnum2);
void operation(int n1,int n2,int &refadd,int &refsub);
int main()
{
	int add,sub;
	int num1,num2;
	scan(num1,num2);
	operation(num1,num2,add,sub);
	cout<<"\nAddition = "<<add;
	cout<<"\nSubtraction = "<<sub;
	return 0;
}
void scan(int &refnum1,int &refnum2)
{
	cout<<"\nEnter two numbers = ";
	cin>>refnum1>>refnum2;
}
void operation(int n1,int n2,int &refadd,int &refsub)
{
	refadd = n1 + n2;
	refsub = n1 - n2;
}


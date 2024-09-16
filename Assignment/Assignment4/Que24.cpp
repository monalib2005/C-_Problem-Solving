//24.Scan 2 integers from user.Find their GCD.
#include<iostream>
using namespace std;

int gcd(int n1,int n2);
int main()
{
	int num1,num2;
	cout<<"\nEnter numbers = ";
	cin>>num1>>num2;
	
	int ans = gcd(num1,num2);
	cout<<"\nAnswer  = "<<ans;
    return 0;
}

int gcd(int n1,int n2)
{
	while(n2 !=0)
	{
		int temp = n2;
		n2 = n1 % n2;
		n1 = temp;
	}
	return n1;
}


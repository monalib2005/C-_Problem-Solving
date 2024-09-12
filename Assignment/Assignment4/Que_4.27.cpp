/*D)For below main() function,scan 2 integers from user and print them.
Do not declare your own variable.Use only given.
	int main()
	{
		int *ptr;
	}*/
#include<iostream>
using namespace std;

int main()
{
	int *ptr;
	ptr = new int[2];
	cout<<"Enter the two values = ";
	cin>>*(ptr + 0);
	cin>>*(ptr + 1);
	cout<<"the values are = ";
	cout<<*(ptr + 0)<<" "<<*(ptr + 1);
	
	return 0;
}

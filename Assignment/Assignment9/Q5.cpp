/*5.For given main() function,scan 3 integers from user.Print their addition.
Draw stackframe in notebook.
Condition = do not declare your own variable.
	int main()
	{
		int *p;
	}*/
#include<iostream>
using namespace std;

int main()
{
	int *p;
	p = new int[4];
	cout<<"\nEnter the numbers = ";
	int i;
	for(i=0;i<=2;i++)
	{
		cin>>*(p+i);
	}
	*(p+3) = 0;
	cout<<"\nThe addition of the number is = ";
	for(i=0;i<=2;i++)
	{
		*(p+3)+= *(p+i);
	}
	cout<<*(p+3);
	return 0;
}

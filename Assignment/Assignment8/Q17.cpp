/*5.Scan a string from user.Copy it in another string in reverse order.
Using simple [ ] notation.*/
#include<iostream>
using namespace std;

int main()
{
	char source[20];
	char target[20];
	cout<<"\nENter the string = ";
	cin.getline(source,20);
	int i=0;
	
	while(source[i]!='\0')
	{
		i++;
	}
	int length = i;
	
		for(i=0;i<length;i++)\
		{
			target[i] = source[length - i];
		}
	cout<<"\ntHE REVERSED STRING = "<<target;
	return 0;
}

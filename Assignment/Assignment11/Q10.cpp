/*Q10.
class String
{
	public:
		char str[30];
};
int main()
{
	String S1,S2;
	S1.getString();
	S2.getString();
	if(S1 == S2)
	{
		cout<<"Both strings are equal";
	}
	else
	{
		cout<<"\nStrings are not equal";
	}
}*/
#include<iostream>
#include<string.h>
using namespace std;

class String
{
	public:
		char str[30];
		String()
		{
			strcpy(str,"None");
		}
		void getString()
		{
			cout<<"\nEnter string = ";
			cin.getline(str,30);
		}
		int operator==(String S)
		{
			int res = strcmp(str,S.str);
			if(res == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
int main()
{
	String S1,S2;
	S1.getString();
	S2.getString();
	if(S1 == S2)
	{
		cout<<"Both strings are equal";
	}
	else
	{
		cout<<"\nStrings are not equal";
	}
}

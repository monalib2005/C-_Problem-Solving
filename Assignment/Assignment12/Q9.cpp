/*4.Define class String to make comparison operations of string simple
using operator overloading.*/

#include<iostream>
#include<string.h>
using namespace std;
class String
{
	private:
		char str[100];
	public:
		
		int operator>(String s)
		{
			int res = strcmp(str,s.str);
			if(res == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		int operator<(String s)
		{
			int res = strcmp(str,s.str);
			if(res == -1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		friend istream& operator>>(istream &din,String &s);
		friend ostream& operator<<(ostream &dout,String s);
		friend int operator==(String s1,String s2);
		friend int main();
	    	
		
};
int main()
{
	String s1,s2;
	cout<<"\Enter string1 = ";
	cin>>s1;
	cout<<"\nEnter string2 = ";
	cin>>s2;
	
	if(s1>s2)
	{
		cout<<s1<<" is greater than "<<s2;
	}
	else if(s1<s2)
	{
		cout<<s1<<" is less than "<<s2;
	}
	else
	{
		cout<<"\n strings are equal.";
	}
	return 0;
}

istream& operator>>(istream &din,String &s)
{
	cin.getline(s.str,100);
	return din;
}

ostream& operator<<(ostream &dout,String s)
{
	cout<<s.str;
	return dout;
}

int operator==(String s1,String s2)
{
	int res = strcmp(s1.str,s2.str);
	if(res == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

#include<iostream>
#include<string.h>
using namespace std;

class String
{
	private:
		char str[100];
		
		int operator>(String S)
		{
			if(strcmp(str,S.str)==1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		friend istream& operator>>(istream &din,String &S);
		friend ostream& operator<<(ostream &dout,String S);
		friend int main();
		
};

int main()
{
	String s1,s2;
	cin>>s1>>s2;
	
	if(s1>s2)
	{
		cout<<s1<<" is greater than "<<s2;
	}
	else
	{
		cout<<s1<<" is less than "<<s2;;
	}
	return 0;
}

istream& operator>>(istream &din,String &S)
{
	cout<<"\nEnter strings = ";
	cin.getline(S.str,100);
	return din;
}

ostream& operator<<(ostream &dout,String S)
{
	cout<<S.str;
	return dout;
}

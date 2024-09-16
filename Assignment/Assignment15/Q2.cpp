//2.WAP to count number of lines,number of words and number of characters in file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\test.txt";
	ifstream fin(path);
	while(fin.fail() == 1)
	{
		cout<<"\nNot connected.";
		exit(1);
	}
	cout<<"\nConnected\n";
	
	char ch;
	int l,c = 0;
	int w = 0;	
	while(fin.eof() == 0)
	{
		ch = fin.get();
		cout<<ch;
		if(ch == '.')
		{
			l++;
		}
		if(ch == ' ')
		{
			w++;
		}
	    c++;
	}
	
	cout<<"\nNumber of characters = "<<c;
	cout<<"\nNumber of words = "<<w;
	cout<<"\nNumber of lines = "<<l;
    return 0;
}


//8.Count number of uppercase alphabets in your file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\test.txt";
	ifstream fin(path);
	if(fin.fail())
	{
		cout<<"\nNot connected.";
		exit(1);
	}
	cout<<"\nConnected.";
	char ch;
	int count = 0;
	while(fin.eof() == 0)
	{
		ch = fin.get();
		if(ch>='A' && ch<='Z')
		{
			count++;
		}
	}
	
	cout<<"\nTotal uppercase alphabets = "<<count;
    return 0;
}


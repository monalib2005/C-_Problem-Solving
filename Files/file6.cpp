#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[100] = "D:\\CppJune24\\Files\\data.txt";
	ifstream fin(path);
	
	if(fin.fail() == 1)
	{
		cout<<"\nFile is not connected.";
		exit(1);
	}
	cout<<"\nFile is connected\n";
	
	char ch;
	
	while(fin.eof() == 0)
	{
		ch = fin.get();
		cout<<ch;
	}
    return 0;
}


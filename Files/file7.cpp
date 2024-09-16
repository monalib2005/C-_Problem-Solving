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
	int count = 0;
	while(fin.eof() == 0)
	{
		ch = fin.get();
		cout<<ch;
		count++;
	}
	cout<<"\nTotal characters = "<<count;
    return 0;
}


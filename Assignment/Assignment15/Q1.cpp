/*1.WAP to read data from file.Read all data from file and print it on console.
Perform experiment while connecting file.e.g. incorrect path,incorrect filename.*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\test.txt";
	ifstream fin(path);
	if(fin.fail() == 1)
	{
		cout<<"\nNot connected.";
		exit(1);
	}
	cout<<"\nConnected";
	
	char str[100];
	while(fin.eof() == 0)
	{
		fin.getline(str,100);
		cout<<"\nstring = "<<str;
	}
	fin.close();
    return 0;
}


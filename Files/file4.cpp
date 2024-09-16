#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[100] = "D:\\CppJune24\\Files\\data.txt";
	ifstream fin(path);
	
	if(fin.fail() == 1)
	{
		cout<<"\nfile is not connected.";
		exit(1);
	}
	cout<<"\nfile is connected.\n";
	char str[100];
	
//	fin.getline(str,100); //this is scanning string upto the \n(enter key)
//	cout<<"\nString = "<<str;
//	
//	fin.getline(str,100);
//	cout<<"\nstring = "<<str;

    while(fin.eof() == 0)
	{
		fin.getline(str,100);
		cout<<"\nstring = "<<str;
	} 
    return 0;
}


#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[100 ] ="D:\\CppJune24\\Files\\cppfiles\\data.txt";
	ifstream fin(path);
	if(fin.fail() == 1)
	{
		cout<<"\nNot conneceted.";
		exit(1);
	} 
	cout<<"\nConnected\n";
	
	char str[100];
	fin.getline(str,100);
	cout<<"\nstring = "<<str;
	
	fin.seekg(0,ios::beg);
	fin.getline(str,100);
	cout<<"\nstring = "<<str;
	
	fin.close();
    return 0;
}


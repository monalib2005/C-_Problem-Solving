//copy one file into another file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char source[100] = "D:\\CppJune24\\Files\\cppfiles\\source.txt"; //here we have to create source file explicitly it does not create by itself
	char target[100] = "D:\\CppJune24\\Files\\cppfiles\\target.txt";
	ifstream fin(source);
	ofstream fout(target);
	if(fin.fail() == 1)
	{
		cout<<"\nNot conneceted.";
		exit(1);
	} 
	cout<<"\nConnected";
	
	char ch;
	while(fin.eof() == 0)
	{
		ch = fin.get();
		fout<<ch;
	} 
	fin.close();
	fout.close();
    return 0;
}


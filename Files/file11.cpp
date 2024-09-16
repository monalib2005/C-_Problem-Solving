#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[100 ] ="D:\\CppJune24\\Files\\cppfiles\\datafile.txt";
	ofstream fout(path);
	if(fout.fail() == 1)
	{
		cout<<"\nNot conneceted.";
		exit(1);
	} 
	cout<<"\nConnected\n";
	
	fout<<"CPP"<<endl;
	fout<<"JAVA"<<endl;
	fout<<"DS";
	
	
	fout.close();
	
	char ch;
	ifstream fin(path);
	while(fin.eof() == 0)
	{
		ch = fin.get();
		cout<<ch;
	}
	
	fin.close();
    return 0;
}


/*5.Write any 2 strings in file using ofstream.In the same program read those lines
from file using ifstream.*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\test.txt";
	ofstream fout(path);
	if(fout.fail())
	{
		cout<<"\nNot connected.";
		exit(1);
	}
	
	//writing in the file.
	fout<<"Hello World."<<endl;
	fout<<"CPP"<<endl;
	fout<<"DS";
	
	fout.close();
	//reading from file.
	ifstream fin(path);
	char str[100];
	while(fin.eof() == 0)
	{
		fin.getline(str,100);
		cout<<str<<endl;
	}
	
	fin.close();
    return 0;
}


#include<iostream>
#include<fstream>
#include<string>
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
	
	string mystr;
	
//	getline(fin,mystr);
//	cout<<"\nstring = "<<mystr;
//	
//	getline(fin,mystr);
//	cout<<"\nstring = "<<mystr;

    while(fin.eof() != 1)
	{
		getline(fin,mystr);  //this will ignores \n characters
		cout<<mystr;
	}
    return 0;
}


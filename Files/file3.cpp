#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[100] = "D:\\CppJune24\\Files\\data.txt";
	ifstream fin(path);
	
	if(fin.fail() == 1)
	{
		cout<<"\nFile is not connected";
		exit(1);
	}
	cout<<"\nFile is connected.\n";
	
	char ch;
	
	//scanning whole file using single character
	while(fin.eof() == 0)
	{
		fin>>ch;
		cout<<ch; //here the \n,spaces all are working as a terminating characters as fin is not scanning them they get ignored by fin

	}
    return 0;
}


#include<iostream>
#include<fstream>
using namespace std;


//reading using single character
int main()
{
	char path[100] = "D:\\CppJune24\\Files\\data.txt";
	ifstream fin(path);
	
	if(fin.fail() == 1)
	{
		cout<<"\nFile is not connected";
		exit(1);
	}
	cout<<"\nFile is connected.";
	
	char ch;
	
	fin>>ch;
	cout<<"\nch = "<<ch;
	
	fin>>ch;
	cout<<"\nch = "<<ch;
	
	fin>>ch;
	cout<<"\nch = "<<ch;
    return 0;
}


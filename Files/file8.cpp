#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[100] = "D:\\CppJune24\\Files\\cppfiless\\datafile.txt";
	ofstream fout(path);
	
	if(fout.fail() == 1)
	{
		cout<<"\nNot connected.";
		exit(1);
	}
	cout<<"\nConnected.";
	
	fout<<"CPP"<<"\n";
	fout<<"JAVA"<<endl;
	fout<<"DS";
	
	fout.close();
    return 0;
}


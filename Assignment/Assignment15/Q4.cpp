/*4.Keep scanning strings from user until user enters STOP.
Write all strings in file.*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	char path[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\test2.txt";
	ofstream fout(path);
	if(fout.fail() == 1)
	{
		cout<<"\nNot connected.";
		exit(1);
	}
	cout<<"\nConnected.";
	
	char str[100];
	cout<<"\nKeep Entering a string = ";
	while(1)
	{
		cin.getline(str,100);
		if(strcmp(str,"STOP") == 0)
		{
			break;
		}
		fout<<str<<endl;
	}
    return 0;
}


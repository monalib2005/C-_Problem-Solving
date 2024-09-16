#include<iostream>
#include<fstream>
#include<string.h>
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
	cout<<"\nConnected";
	
	char str[100];
	cout<<"\nKeep entering string = ";
	while(1)
	{
		cin.getline(str,100);  //we have to write the string from console hence we use here cin.
		if(strcmp(str,"STOP") == 0)
		{
			break;
		}
		fout<<"\nString = "<<str;  //here it will get write in file
	}
	fout.close();
    return 0;
}


//6.WAP to copy one file into another file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char source[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\test.txt";
	char target[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\test2.txt";
	ifstream fin(source);
	ofstream fout(target);
	if(fin.fail())
	{
		cout<<"\nNot connected.";
		exit(1);
	}
	if(fout.fail())
	{
		cout<<"\nNot connected.";
		exit(1);
	}
	char ch;
	while(fin.eof() == 0)
	{
		ch = fin.get();
//		if(ch = EOF)
//		{
//			break;
//		}
		fout<<ch;
	}
	
    return 0;
}


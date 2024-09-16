/*7.Create 2 files, source1.txt and source2.txt.
Your task is to merge these 2 files in target.txt so that it will contain alternate lines from
source1.txt and source2.txt.Example shown below.*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char source1[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\source1.txt";
	char source2[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\source2.txt";
	char target[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\target.txt";
	ifstream fin1(source1);
	ifstream fin2(source2);
	ofstream fout(target);
	
	if(fin1.fail() == 1 || fin1.fail() == 1 || fout.fail() == 1) 
	{
		cout<<"\nNot connected.";
		exit(1);
	}
	cout<<"\nConnected";
	
	char str1[100];
	char str2[100];
	
	while(fin1.eof() == 0 && fin2.eof() == 0)
	{
		fin1.getline(str1,100);
		fout<<str1<<endl;
		
		fin2.getline(str2,100);
		fout<<str2<<endl;
	}
	
	fin1.close();
	fin2.close();
    return 0;
}


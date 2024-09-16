/*3.While connecting in write mode using ofstream class,check following possibilities.
	-correct path,file already present
	-correct path,file not present
	-incorrect path*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\test2.txt";
	ofstream fout(path);
	
	if(fout.fail() == 1)
	{
		cout<<"\nNot connected";
		exit(1);
	}
	cout<<"\nConnected";
	
    return 0;
}


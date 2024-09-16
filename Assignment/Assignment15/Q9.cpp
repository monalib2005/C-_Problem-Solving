//9.WAP to understand difference between ios::app and ios::ate.
#include<iostream>
#include<fstream>
using namespace std;

class Student
{
	public:
		char stdname[20];
		int age;
		
		void scan()
		{
			cout<<"\nEnter name = ";
			cin>>stdname;
			cout<<"\nEnter age = ";
			cin>>age;
		}
};

int main()
{
	char path[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\test.txt";
	fstream fobj;
	fobj.open(path,ios::out|ios::ate|ios::binary);
	if(fobj.fail())
	{
		cout<<"\nNot connected.";
		exit(1);
	}
	cout<<"\nConnected.";
	
	Student s1,s2,s3;
	s1.scan();
	s2.scan();
	s3.scan();
	
	fobj.write((char*)&s1,sizeof(s1));
	fobj.write((char*)&s2,sizeof(s2));
	fobj.write((char*)&s3,sizeof(s3));
	
	fobj.close();
	
    return 0;
}


/*10.
class Student
{
	public:
		char stdname[30];
		int age;
		char hometown[20];
};
You have to write 2 programs in this question.Both programs will access student.txt.
First program will write 3 objects of class Student in student.txt.
Second program will read those objects from file.
Both programs must contain same definition for class Student.*/
#include<iostream>
#include<fstream>
using namespace std;
class Student
{
	public:
		char stdname[30];
		int age;
		char hometown[20];
		
		void scan()
		{
			cout<<"\nEnter name = ";
			cin.getline(stdname,30);
			cout<<"\nENter age = ";
			cin>>age;
			cin.ignore(1);
			cout<<"\nEnter hometown = ";
			cin.getline(hometown,20);
		}
};
int main()
{
	char path[100] = "D:\\CppJune24\\Assignment\\Assignment15\\file\\student.txt";
	fstream fobj;
	fobj.open(path,ios::in|ios::out|ios::binary);
	if(fobj.fail())
	{
		cout<<"\nNot connected.";
		exit(1);
	}
	cout<<"\nConnected.";
	Student s1,s2,s3;
	s1.scan();s2.scan();s3.scan();
	
	fobj.write((char*)&s1,sizeof(s1));
	fobj.write((char*)&s2,sizeof(s2));
	fobj.write((char*)&s3,sizeof(s3));
	
	fobj.close();
	
    return 0;
}


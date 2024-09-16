
#include<iostream>
#include<fstream>
using namespace std;

class Student
{
	public:
		char stdname[30];
		int age;
		char hometown[20];
		
		void show()
		{
			cout<<"\nName = "<<stdname;
			cout<<"\nAge = "<<age;;
			cout<<"\nhometown = "<<hometown;
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
	Student temp;
	cout<<"\nThe data as follows = ";
	fobj.read((char*)&temp,sizeof(temp));
	temp.show();
	fobj.read((char*)&temp,sizeof(temp));
	temp.show();
	fobj.read((char*)&temp,sizeof(temp));
	temp.show();
	
	fobj.close();
    return 0;
}


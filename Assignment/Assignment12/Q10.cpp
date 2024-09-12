/*5.Create a database of 6 students.Sort this database in ascending order
by name.*/
#include<iostream>
#include<string.h>
using namespace std;

//class Student
//{
//	private:
//		char stdname[20];
//		int age;
//	public:	
//		Student()
//		{
//			strcpy(stdname,"0");
//			age = 0;
//		}
//		
//		void getdata()
//		{
//			cout<<"\nEnter the name = ";
//			cin.getline(stdname,20);
//			cout<<"\nEnter age = ";
//			cin>>age;
//			cin.ignore(1);
//		}
//		
//		int compare(Student S)
//		{
//			int res = strcmp(stdname,S.stdname);
//			if(res == 1)
//			{
//				return 1;
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		
//		void display()
//		{
//			cout<<"\nname = "<<stdname;
//			cout<<"\nage = "<<age;
//		}
//};
//
//int main()
//{
//	Student std[6];
//	int i,j;
//	for(i=0;i<6;i++)
//	{
//		std[i].getdata();
//	}
//	
//	Student temp;
//	
//	for(i=0;i<6;i++)
//	{
//		for(j=i+1;j<6;j++)
//		{
//			if(std[i].compare(std[j]))
//			{
//				temp = std[i];
//				std[i] = std[j];
//				std[j] = temp;
//			}
//		}
//	}
//	
//	for(i=0;i<6;i++)
//	{
//		std[i].display();
//	}
//	return 0;
//}


//with operator overloading
class Student
{
	private:
		char stdname[20];
		int age;
	public:	
		Student()
		{
			strcpy(stdname,"0");
			age = 0;
		}
		
		int operator>(Student S)
		{
			int res = strcmp(stdname,S.stdname);
			if(res == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		friend istream& operator>>(istream& din,Student &s);
		friend ostream& operator<<(ostream& dout,Student s);
};

int main()
{
	Student std[6];
	int i,j;
	for(i=0;i<6;i++)
	{
		cin>>std[i];
	}
	
	Student temp;
	
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(std[i]>std[j])
			{
				temp = std[i];
				std[i] = std[j];
				std[j] = temp;
			}
		}
	}
	
	for(i=0;i<6;i++)
	{
		cout<<std[i];
	}
	return 0;
}

istream& operator>>(istream& din,Student &s)
{
	cout<<"\nEnter the name = ";
	cin.getline(s.stdname,20);
	cout<<"\nEnter age = ";
	cin>>s.age;
	cin.ignore(1);
	return din;
}

ostream& operator<<(ostream& dout,Student s)
{
	cout<<"\nname = "<<s.stdname;
	cout<<"\nage = "<<s.age;
}

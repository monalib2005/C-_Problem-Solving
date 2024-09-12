/*Q12.
class Student
{
	private:
		char name[30];
		int age;
};
Create a database of 8 students.Print name and age of all
those students whose age is greater than 21.
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)*/
#include<iostream>
using namespace std;

//without operator overloading
//class Student
//{
//	private:
//		char name[30];
//		int age;
//		void scan()
//		{
//			cout<<"\nEnter name = ";
//			cin.getline(name,30);
//			cout<<"\nEnter age = ";
//			cin>>age;
//			cin.ignore(1);
//		}
//		void show()
//		{
//			cout<<"\nname = "<<name;
//			cout<<"\nAge = "<<age;
//		}
//		friend int main();
//};
//
//int main()
//{
//	Student std[8];
//	int i;
//	for(i=0;i<8;i++)
//	{
//		std[i].scan();
//	}
//	for(i=0;i<8;i++)
//	{
//		if(std[i].age>21)
//		{
//			std[i].show();
//		}
//	}
//	return 0;
//}





//with operator overloading
class Student
{
	private:
		char name[30];
		int age;
		void operator~()
		{
			cout<<"\nEnter name = ";
			cin.getline(name,30);
			cout<<"\nEnter age = ";
			cin>>age;
			cin.ignore(1);
		}
		void show()
		{
			cout<<"\nname = "<<name;
			cout<<"\nAge = "<<age;
		}
		int operator>(int val)
		{
			if(age>21)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		friend int main();
};

int main()
{
	Student std[8];
	int i;
	for(i=0;i<8;i++)
	{
		~std[i];  //scanning
	}
	for(i=0;i<8;i++)
	{
		if(std[i]>21)
		{
			std[i].show();
		}
	}
	return 0;
}

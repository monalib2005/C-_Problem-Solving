Date = 24-11-2023
================================================================================
Section-1

Q1.WAP to check compiletime polymorphism.Use runtime objects.Refer notebook.
Q2.AWP to check working of runtime polymorphism.
Q3.WAP to understand working of abstract classes.Perform experiments.
Test all the rules we have seen during lecture.
Q4.WAP to make private member function of one class a friend of another class.
Q5.WAP to check working of initialization list.
================================================================================
Section-2

Q1.
int main()
{
	char *p,*q;
}
Scan 2 strings from user here and find their length.
Compare them and check if the are equal or not.

Q2.
Scan n integers from user.Sort them in ascending order.

Q3.
Declare and initialize an array of 8 integers.
Scan a number from user.If that number is present in array,delete it.
Deletion of element will not change the size of array.

Q4.
Using inbuilt string data type,scan 2 strings from user.Compare them to check if they
are equal or not.

Q5.
Scan 6 city names from user.Sort them alphabetically in ascending order.
Use inbuilt string data type.

Q6.
Scan 2 integers from user.Print their addition.
Then ask user if he wants to perform addition of 2 more integers.
Repeat the process if he wants to.Else stop the program.

Q7.
class City
{
	public:
		string name;
		int population;
};
Create a database of 5 cities.Print the database.
If user enters same city again,give him message that
the city is already present.Ask him to enter new city name.
If he enters population less than 100,give him message wrong population.
Ask him to enter correct population.

Q8.WAP to understand the diamond problem.

Q9.WAP to understand constructor execution in multiple and multilevel inheritance.
Use private and protected keywords for inheritance.
Check the destructor execution also.

Q10.
class Person
{
	public:
		string name;
		int age;
		void scanperson();
		void showperson();
};
class Employee
{
	public:
		string name;
		int age;
		string companyname;
};
class Teacher
{
	public:
		string name;
		int age;
		string schoolname;
};

Scan data for 2 employees and 2 Teachers.
Implement inheritance to solve this program.
You can make changes in class to implement inheritance.

Q11.
class Date
{
	public:
		int day;
		int month;
		int year;
		void getdate();
		void showdate();
};

class Employee
{
	public:
		//name
		//birth date
		//joining date
		//company name
};
Scan data for 3 employees and print it.
Think how can you relate Date and Employee clases.(is-a OR has-a).

Q12.
class Date
{
	public:
		int day;
		int month;
		int year;
		void getdate();
		void showdate();
};

class Person
{
	public:
		string name;
		int age;
		//birthdate
		void scanperson();
		void showperson();
};

class Employee
{
	public:
		string name;
		int age;
		string companyname;
		//joining date
};
Use inheritance and composition wisely to scan and print data of 3 Employees.

Q13.
class number
{
	int x;
	int y;
};
Create 3 runtime objects.Scan their data using constructor.
Print their data using destructor.

Q14.
class Employee
{
	char name[30];
	char hometown[20];
};
Create a database of 6 employees.
-Print only those employees whose name starts with 'A'.
-Print only those employees who belong to pune.

Q15.WAP to make constructor and destructor of one class a friend of another class.	
================================================================================	

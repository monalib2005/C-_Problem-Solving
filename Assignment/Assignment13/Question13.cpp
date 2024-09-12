1.WAP to check how multilevel inheritance works.
Try to access members of Parent from Child class.

2.WAP to check how multiple inheritance works.
Try to access members of Parent from Child class.
Check ambiguity when multiple Parents contain same member.

3.
class Parent
{
	protected:
		int y;
		void disp();
	public:
		int z;
		void show();
};
class Child : public Parent
{
};
In main() function,create an object of class Child and try to access each member
in Child as well as in its Parent class.(Access each member)
Do not change access specifier of any member.Do not add any member to child.
Write path you have used to access each member in your program in Comment. 

4.
class Parent
{
	protected:
		int y;
		void disp();
	public:
		int z;
		void show();
};
class Child : protected Parent
{
	public:
		void myfun();
};
In main() function,create an object of class Child and try to access each member
in Child as well as in its Parent class.(Access each member)
Do not change access specifier of any member.Do not add any member to child.
Write path you have used to access each member in your program in Comment.

5.
class Parent
{
	protected:
		int y;
		void disp();
	public:
		int z;
		void show();
};
class Child : private Parent
{
	public:
		void myfun();
};
In main() function,create an object of class Child and try to access each member
in Child as well as in its Parent class.(Access each member)
Do not change access specifier of any member.Do not add any member to child.
Write path you have used to access each member in your program in Comment.

6.
class Parent
{
	private:
		int y;
		void disp();
	public:
		int z;
		void show();
};
class Child : public Parent
{
	public:
		void myfun();
};
In main() function,create an object of class Child and try to access each member
in Child as well as in its Parent class.(Access each member)
Write path you have used to access each member in your program in Comment.

7.
class Parent
{
	private:
		int y;
		void disp();
	protected:
		int z;
		void show();
};
class Child : public Parent
{
	public:
		void myfun();
};
In main() function,create an object of class Child and try to access each member
in Child as well as in its Parent class.(Access each member)
Write path you have used to access each member in your program in Comment.

8.
class Grand
{
	public:
		void show();
};
class Parent : public Grand
{
	public:
		void show();
};
class Child : public Parent
{
	public:
		void show();
};
int main()
{
	Child obj;
}
Using object obj,try to access all 3 show() functions.
Try this code by changing access specifiers of membbers.

9.
WAP to check working of Diamond problem.Solve this problem using membership identity label.

10.WAP to solve diamond problem using virtual class.

11.WAP to check constructor execution in multilevel inheritance.
Both default and parameterized constructors expected.

12.
WAP to check constructor execution in multiple inheritance.
Only default constructor expected.

13.
WAP to check constructor execution in multiple inheritance.
Both default and parameterized constructors expected.
Try virtual class also.

14.
WAP to understand working of initialization list.

15.
WAP to understand execution of destructor in inheritance(multilevel inheritance).

16.
WAP to understand execution of destructor in inheritance(multiple inheritance).

17.Scan details of 2 students(name,age,hometown,marks) and 2 Teachers(name,age,hometown,salary).
Print thode details.Use of inheritance is expected.Think on your own then check notebook.
============================================================================

1.
WAP to explain static members concept of class.

2.
WAP to explain parameter passing by reference.

3.
WAP to create array of n integers.Scan these n integers from user.
Print the largest value from n integers.(use new operator)

4.
WAP to create an array of n fraction values.Sort this array in ascending order.
(new operator)

5.
Scan 3 strings from user.Use inbuilt string datatype.
Compare those strings and check which one will go first in dictionary.

6.create an array of 6 city names.Sort this array in ascending order.
Use string datatype.

7.
class Number
{
	private:
		int x,y;
};
class Digit
{
	public:
		void scan()
		{
			//create object of Number
			//Scan and print data for that object
		}
};
int main()
{
	Digit obj;
}

8.
class Student
{
	public:
		String name;
		int age;
		String hometown;
};
Create an array of 4 students.Print only those students whose hometown is "PUNE".
(You can use operator overloading also if you understand how to use)

9.
For class Distance containing km and mtr,scan 6 distances from user.Find the largest distance.
(Use operator overloading.Data members must be private)

10.
class Student
{
	public:
		char name[30];
		int age;
		String hometown[30];
};
Create an array of 4 students.Print only those students whose hometown is "PUNE".


11.
class Base
{
	private:	
		int b;
};
class Power
{
	private:
		int p;
};
class Calc
{
	//calculate here base raised to power
};
//Create objects of Base and Power in main() function.
//friend concept is to be used here

13.WAP to understand the execution of destructor for runtime object.

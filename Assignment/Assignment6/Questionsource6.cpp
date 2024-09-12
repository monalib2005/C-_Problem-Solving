ate = 14 October 2023
===============================================================
- Do not forget to read notebook before begging help to others.
- Do not use string.h functions unless mentioned.


===============================================================
Section-1
Q1.
	class Number
	{
		public:
			int x;
			int y;
	};
Create 2 objects in main().Scan their data and print.

Q2.
	class Time
	{
		public:
			int hour,min;
	}
Create 2 objects of class Time.Scan their data.
Convert these objects in total meters.Decide which one is greater.
Do not add any member function.

Q3.
	class Student
	{
		public:
			char name[30];
			int age;
			char hometown[20];
	}
Scan data of 2 Students from user.And print that data.
Do not add any member function.

Q4.
	class Number
	{
		public:
			int x,y;
			void scandata();
			void printdata();
	}
Scan and print details of 2 objects of class Number.Do not access x and y in non member functions.

Q5.
	class Distance
	{
		private:
			int km,mtr;
		public:
			void scandata();
			void printdata();
			void convert();
	}
Scan 2 distances from user.Convert them in total meters in convert() function.
Define all member functions outside the class.

Q6.
	class Number
	{
		private:
			int x,y;
		public:
			void scan();
			void print();
	};
Scan data for 2 objects of class Number.Try to access private members in non member functions
and check response of compiler.Perform experiments.

Q7.
	class Student
	{
		private:
			float weight;
			int age;
		public:
			void scan();
			void print();
	};
Scan data of 2 students and print them.For any problem,read notebook first.

Q8.
	class Number
	{
		private:
			int x,y;
			void scan();
		public:
			void print();
	};
Scan data for 2 objects of Number and print them.
Define all member functions outside the class.

Q9.
	class Number
	{
		public:
			static int x;
			static void show();
	};
Assign value to x in main() and print its value in show().
Understand working of static members.Perform some experiments.

Q10.
	class Number
	{
		private:
			int x;
			static int y;
		public:
			void set(); //will assign values to x and y
			void change();//will increment values of x and y by 1
			void show();//prints values of x and y.
	};
For 3 objects of class Number,call following functions in different sequence 
and try to understand the output.

===============================================================

Section-2

Q.Complete the code for following main() functions.
Do not change main() function.
class Number has 2 data members,x and y.
First you have to decide if called function is nonstatic member function,
static member function or independant function.

1.
	int main()
	{
		Number T1,T2;
		T1.scan();
		T2.scan();
		T1.print();
		T2.print();
	}

2.
	int main()
	{
		Number T1,T2;
		T1 = scan();
		T2 = scan();
		print(T1);
		T2.print();
	}

3.
	int main()
	{
		Number T1,T2;
		T1.scan(T2);
		T1.print(T2);
	}

4.
	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		T2.scan();
		T3.add(T1,T2);
		T3.show();
	}
You know how to perform addition.
Addition must be stored inside T3.

5.
	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T3 = add(T1,T2);
		T3.print();
	}
Addition must be stored inside T3.

6.
	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T1.add(T2,T3);
		T3.show();
	}
Addition must be stored inside T3.

==========================================================
Section-3

(Remember,Define function for each task.)
1.Declare and initialize 2 arrays.One is of 6 integers and another is of 8 integers.
Define only one function sum() to find addition of all elements of array.
Print both additions back in main().sum() will find addition of elements of only
one array at a time.

2.Declare an array of 6 integers.Define function scanarray(),printarray() and findmax().
scanarray() - will scan all elements of array.
printarray() - will print all elements of array.
findmax() - will find maximum value from array.

3.WAP to understand working of setw().

4.Create an array of 6 fractions.Scan them from user.Sort them in ascending order.
Then find the smallest and largest values from array.

5.WAP to understand working of default arguments.
Write program of simple interest.

6.Scan an array of n integers from user.Copy it in another array.
Define functions to scan,copy and print array.Read notebook to check how to
pass array to function.

7.Scan array of n characters from user.Count uppercase and lowercase
alphabets.Define function for each task.
===============================================================

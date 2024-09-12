Q1.Read each question carefully and complete the code.
Do not use friend function in any program given below.
1.
	class Number
	{
		private:
			int x,y;
		public:
			void scan();
			void print();
	//Do not add your own memberfunction.
	}
	int main()
	{
		//Scan and print data for 2 objects.
	}

2.
	class Number
	{
		private:
			int x,y;
			void scan();
		public:
			void print();
	//Do not add your own memberfunction.
	}
	int main()
	{
		//Scan and print data for 2 objects.
	}

3.
	class Number
	{
		private:
			int x,y;
			void scan();
			void print();
		public:
			static void scanfun(parameter list);
			static void printfun(parameter list);
		//Do not add your own memberfunction.
		//scan x and y in scan() function only
		//print x and y in print() function only.
	}
	int main()
	{
		//Scan and print data for 2 objects.
	}

4.
	class Number
	{
		int x,y;
		void addition(parameter list);
		public:
			void scan();
			void print();
			void myfun(parameter list);
		//Do not add your own memberfunction.		
	};
	int main()
	{
		//Perform T3 = T1 + T2 for given class Number.
	}

5.
	class Base
	{
		private:
			int b;
		public;
			//You can add your own member functions
	};
	class Power
	{
		private:
			int p;
		public:
			//You can add your own member functions
	};
	int main()
	{
		Base base,power;
		//Calculate base^power in independannt function calc().
		//Print result in main().
		//Do not use friend function.
	}
========================================================================================
Q2.Read each question carefully and complete the code for given tasks.
You can use frined function here.

1.
	class Number
	{
		int x,y;
	};
	class Digit
	{
		public:
			void getdata()
			{
				Number obj;
				//scan and print obj here.
			}
	};
	main()
	{
		Digit D;
		D.getdata();
	}

2.
	class Number
	{
		private:
			int x;
			void scandata();
			void printdata();
	};
	int main()
	{
		//Scan and print data of one object of Number.
	}

3.
	class Base
	{
		int b;
	};
	class Power
	{
		int p;
	};
	void calc(parameter list)
	{
		//calculate base^power here, using objects created in main.
	}
	int main()
	{
		Base base;
		Power power;
	}

4.
	class Base
	{
		int b;
	};
	class Power
	{
		int p;
	};
	class Calc
	{
		public:
			int calculate(parameter list);
	}
	int main()
	{
		Base base;
		Power power;
		Calc obj;
		//using calculate function find base^power.
		//print answer in main().	
	}

5.
	class Number
	{
		int x;
		//do not add member function here.
	};
	class Digit
	{
		private:
			void show()
			{
				Scan and print an object of Number here.
			}
		public:
			void disp();
	};
	
	int main(){}

6.
	class Base
	{
		int b;
		//do not add member function here.
	};
	class Power
	{
		int p;
		//do not add member function here.
	};
	class Calc
	{
		private:
			int calculate();
			//do not add member function here.
	}
	int main()
	{
		Base base;
		Power power;
		Calc obj;
		//using calculate function find base^power.
		//print answer in main().	
	}
========================================================================================
Q3.Write codes for following questions.To access string we use 2 notations.
1)Simple [ ] notation
2)using pointer notation(*(p+i))

0.Write a program to check difference between cin and cin.getline() when scanning string.

1.Scan a string from user.Find length of string.
Using simple [ ] notation.

2.Scan a string from user.Count number of words in string.
using pointer notation(*(p+i))

3.Scan a string from user.Copy it in another string.

4.Scan a string from user.Replace every occurrence of vowel by 'X'.
Print resulting string.
using pointer notation(*(p+i))

5.Scan a string from user.Copy it in another string in reverse order.
Using simple [ ] notation.
========================================================================================
Q4.For following questions,define functions for each task.
Do not use any function from string.h header file.

1.Define your own functions to find length of string and copy one string into another string.

2.Define function toCapital() ot converts all lowercase alphabets in uppercase in given string.
input = "KALKI 2829 is good Movie."
output = "KALKI 2829 IS GOOD MOVIE."

3.Scan array of 7 integers from user.Then scan a number in x.
Search and delete that x in array.
input = 14,6,42,6,5,6,3
if x = 6 then output will be = 14,42,5,3,0,0,0

4.Scan a string from user.Check if it is pallindrome or not.

5.Scan a string from user.Check how many distinct characters have been used in a string.
input = "hello from java"
output = 11 distinct characters are used.
======================================================================================

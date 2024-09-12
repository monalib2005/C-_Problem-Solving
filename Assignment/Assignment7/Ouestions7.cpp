a
		D.getdata();
	}

2.
	class Number
	{
		private:
			int x;
			void scandata();
			void printdata();
		public:
			static void myfun(parameter list);
	};
	int main()
	{
		//Scan and print data of one object of Number.
	}

3.
	class Base
	{
		public:
			int b;
			void scan();
	};
	class Power
	{
		public:
			int p;
			void print();
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
		//you can add member function
	};
	class Power
	{
		int p;
		//you can add member function
	};
	class Calc
	{
		public:
			void calculate(parameter list);
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
		public:
			void scan();
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
	
	int main()
	{
		//Your code here
	}

6.
	class Base
	{
		public:
			int b;
			void scan(parameter list if necessary)
			//scan() function will scan base and power.
	};
	class Power
	{
		public;
			int p;
			void calc(parameter list if necessary);
			//calc function will find out base raised to power.
	};
	
	int main()
	{
		Base base;
		Power power;
		//Your code here.
	}

==================================================================================
Q4.
Draw stackframes of all programs you have solved in Q2 and Q3.(In Notebook)

==================================================================================

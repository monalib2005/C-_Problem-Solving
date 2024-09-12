
/*5.
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
	}*/
#include<iostream>
using namespace std;

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
			Number obj;
			obj.scan();
			
		}
	public:
	    void disp();	
};

int main()
{
	Digit d;
	d.disp();
	return 0;
}
void Number::scan()
{
	cout<<"\nENter the number = ";
	cin>>x;
	cout<<"\nThe number is = ";
	cout<<x;
}
void Digit::disp()
{
	show();
}

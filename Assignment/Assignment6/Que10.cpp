/*Q10.
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
and try to understand the output.*/
#include<iostream>
using namespace std;

class Number
{
	private:
		int x;
		static int y;
	public:
	    void set();
	    void change();
	    void show();
};

int Number::y; //Tis declaration is imp for static datanmember

int main()
{
	Number x,y,z;
	x.Number::set();
	x.Number::change();
	x.Number::show();
	
	y.Number::change();
	y.Number::set();
	y.Number::show();
	
	z.Number::show();
	z.Number::change();
	z.Number::set();
	return 0;
}
void Number::set()
{
	cout<<"\nEnter the values of  x and y = ";
	cin>>x>>Number::y;
}
void Number::change()
{
	x++;
	Number::y++;
}
void Number::show()
{
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<Number::y;
}

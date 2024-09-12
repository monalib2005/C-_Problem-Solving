/*1.
	class Number
	{
		public:
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
	}*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

class Digit
{
	public:
		void getdata()
		{
			Number obj;
			cout<<"Enter the numbers = ";
			cin>>obj.x>>obj.y;
			cout<<"\nThe numbers are = ";
			cout<<"\nx = "<<obj.x;
			cout<<"\ny = "<<obj.y;
		}
};

int main()
{
	Digit d;
	d.getdata();
	return 0;
}

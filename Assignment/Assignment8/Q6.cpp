/*1.
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
	}*/
#include<iostream>
using namespace std;
class Digit;
class Number
{
	int x,y;
	friend Digit;
};
class Digit
{
	public:
		void getdata()
		{
			Number obj;
			//scan and print obj here.
			cout<<"Enter the numbers = ";
			cin>>obj.x>>obj.y;
			cout<<"\nx = "<<obj.x;
			cout<<"\ny = "<<obj.y;
		}
};

int main()
{
	Digit D;
	D.getdata();
	return 0;
}

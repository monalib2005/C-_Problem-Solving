/*5.
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
	};*/
#include<iostream>
using namespace std;
class Number
{
	int x;
	//do not add member function here.
	friend class Digit;
};
class Digit
{
	private:
		void show()
		{
			//Scan and print an object of Number here.
			Number num;
			cout<<"\nEnter the number = ";
			cin>>num.x;
			cout<<"\nThe number is = "<<num.x;
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
void Digit::disp()
{
	show();
}

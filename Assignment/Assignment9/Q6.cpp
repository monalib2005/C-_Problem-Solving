/*6.Read carefully and complete the code for mentioned task.
class Number
{
	private:
		int x,y;
		//Do not declare member functions.
};

class Digit
{
	int d;
	public:
		void scandata()
		{
			Number Temp;
			//scan and print here Temp and d;
		}
}
int main()
{
}*/
#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		friend class Digit;
};

class Digit
{
	int d;
	public:
		void scandata()
		{
			Number Temp;
			cout<<"Enter the value of x and y = ";
			cin>>Temp.x>>Temp.y;
			cout<<"\nEnter the value of d = ";
			cin>>d;
			cout<<"\nThe values of x and y are "<<Temp.x<<" and "<<Temp.y;
			cout<<"\nThe value of d is "<<d;
		}
};

int main()
{
	Digit d1;
	d1.scandata();
	return 0;
}

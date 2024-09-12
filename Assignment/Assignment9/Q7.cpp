/*7.Read carefully and complete the code for mentioned task.
class Number
{
	private:
		int x,y;
		//do not declare any member function.
};
class Digit
{
	private:
		int d;
		Number num;
	public:
		void scandata();
		void printdata();
};
int main()
{
	Digit var;
	//scan and print data for var.
}*/

#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		//do not declare any member function.
		friend class Digit;
};
class Digit
{
	private:
		int d;
		Number num;
	public:
		void scandata();
        void printdata();
};

int main()
{
	Digit var;
	var.scandata();
	var.printdata();
	return 0;
}

void Digit::scandata()
{
	cout<<"Enter the value of x and y = ";
	cin>>num.x>>num.y;
	cout<<"\nEnter the value of d = ";
	cin>>d;
}
void Digit::printdata()
{
	cout<<"The values of x and y are = ";
	cout<<num.x<<" "<<num.y;
	cout<<"\nThe value of d  is = ";
	cout<<d;
}

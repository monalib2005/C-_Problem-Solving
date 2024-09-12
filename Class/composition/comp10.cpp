#include<iostream>
using namespace std;

class Number
{
	private:
		int n;
	public:
	    void getn();
		void shown();	
};

class Digit
{
	private:
		int d;
	public:
	    void getd();
		void showd();	
};

class Myclass
{
	private:
		Number num;
		Digit var;
	public:
     	void scan();
     	void print();
		
};

int main()
{
	Myclass Temp;
	Temp.scan();
	Temp.print();
	return 0;
}

void Myclass::scan()
{
	cout<<"Enter the numers = ";
	num.getn();
	var.getd();
}
void Myclass::print()
{
	cout<<"the numbers are = ";
	num.shown();
	var.showd();
}

void Number::getn()
{
	cin>>n;
}

void Number::shown()
{
	cout<<"\n"<<n;
}
void Digit::getd()
{
	cin>>d;
}
void Digit::showd()
{
	cout<<"\n"<<d;
}

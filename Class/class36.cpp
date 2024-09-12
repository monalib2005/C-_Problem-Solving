#include<iostream>
using namespace std;

class Myclass
{
	private:
		void show();
		static void disp();
	public:
	    void print();	
};

int main()
{
	Myclass obj;
	obj.print();
	return 0;
}
void Myclass::show()
{
	cout<<"\nIn show()";
}
void Myclass::disp()
{
	cout<<"\nIn disp()";
}
void Myclass::print()
{
	show();
	Myclass::disp();
	cout<<"\nIn print()";
}

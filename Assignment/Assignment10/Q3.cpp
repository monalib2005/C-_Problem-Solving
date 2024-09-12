//4.WAP to understand Inner classes.Perform maximum experiment.
#include<iostream>
using namespace std;

class Outer
{
	public:
		int x;
		class Inner
		{
			public:
				int y;
				void show()
				{
					cout<<"\ny = "<<y;
				}
				void print();
		};
		Inner Temp2;
		
};

int main()
{
	Outer Temp;
	Outer::Inner obj;
	Temp.x = 4;
	obj.y = 2;
	obj.show();
	
	//using Temp2;
	Temp.Temp2.y = 5;
	Temp.Temp2.show();
	
	//using print()
	obj.print();
	return 0;
}

void Outer::Inner::print()
{
	cout<<"\ny1 = "<<y;
}

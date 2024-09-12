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
		};
		Inner temp;
//		void Inner::show()
//		{
//			cout<<"\ny = "<<y;
//		}  ---> cannot define member function within other class
};

//void Outer::Inner::show()
//{
//	cout<<"\ny = "<<y;
//}

int main()
{
	Outer var;
	var.temp.y = 6;
	var.temp.show();
    
    Outer var2;
    var2.temp.y = 9;
    var2.temp.show();
	
	return 0;
}

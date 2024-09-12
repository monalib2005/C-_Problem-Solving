//3.WAP to understand local classes.Perform maximum experiment.
#include<iostream>
using namespace std;

int main()
{
	
	class Number
	{
		public:
			int x,y;
			void show()
			{
				x = 2;
				y = 4;
				cout<<"\nx = "<<x<<"   "<<"y = "<<y;
			}
	};
	Number T;
	T.show();
	T.x = 6;
	T.y = 9;
	T.show(); 
	return 0;
}

//void myfun(Number var)
//{
//	var.show()
//} ---->gives error because parameter of class Number is local of main() function

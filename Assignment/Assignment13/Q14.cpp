/*14.
WAP to understand working of initialization list.*/

#include<iostream>
using namespace std;

class Number1
{
	public:
		int x,y;
		Number1():x(0),y(0){};
		
		//void show():x(10){}; //intialization list is not possible with function
		
};

class Number2
{
	public:
		int x,y;
		Number2():y(3),x(2){}; //even also sequence is oppo but still first 2 get stored first in x and then 3 in y as x is declared first and then y
};

class Number3
{
	public:
		int x,y;
		//Number():y(3),x(y+2){}; //not possible because x is declared first and then y
		
		Number3():x(3),y(x+3){};
};

int main()
{
	Number1 n1;
	Number2 n2;
	Number3 n3;
	return 0;
}

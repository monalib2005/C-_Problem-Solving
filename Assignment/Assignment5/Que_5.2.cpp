/*2.WAP to understand static variable.
-check if static variable can be accessed from other function.
-check if static variable gets initail value again if we call that function again.*/

#include<iostream>
using namespace std;
void check();
int main()
{
	check();
	check();
	check();
	//cout<<y; //Here the static y from check() function is not accesible.
	return 0;
}
void check()
{
	int x = 10;
	static int y = 5;
	y++;
	x++;
	cout<<x<<" "<<y<<"\n"; /*Here we can see the differnce between static variable and without static
	                       variable that the value of x remains same because x get distroyed with the 
						   frame  but the y remains retains the value throught the function.*/
}

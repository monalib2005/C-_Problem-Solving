/*1.WAP to understand global variable and local variable.Check the following points.
-can we declare two local variables with same name?
-Check if local variable of one function is accessible in another function or not.
-Check if global variables can have same name or not.
-Check if global variable can be initialized at declaration or not.
-change value of global variable from one function,and check if this change
is visible in another function or not.
-try to access global variable when local and global have same names.*/

#include<iostream>
using namespace std;
int g = 7; //Here the global variable can initialized at declaration.
void check();
void change();
int main()
{
//	int a = 10;
//	int a = 20;   //We can't declare two local variable with same name.

    int b = 5;
    //change(); //Here change() function can change the value of g but we have to call this function as like this otherwise it will not show such change
 	int g = 10;
 	cout<<g; //10...because,Here the prefernce will be given to the local variable first
	return 0;
}

/*void check()
{
	cout<<b; //Here the b is not accessible because b is not declared in this scope.
}*/

/*void change()
{
	g = 16;
}*/  

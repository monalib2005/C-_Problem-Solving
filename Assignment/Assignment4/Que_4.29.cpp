/*2)

---- myfun()
{
	---- ;
}


int main()
{
	int a = 10;
	
	cout<<a;  //10  
	
	---- = myfun();
	
	cout<<a;  //25 

	return 0;
}*/
#include<iostream>
using namespace std;

int myfun()
{
	return 25;
}


int main()
{
	int a = 10;
	
	cout<<a<<"\n";  //10  
	
	a= myfun();
	
	cout<<a;  //25 

	return 0;
}


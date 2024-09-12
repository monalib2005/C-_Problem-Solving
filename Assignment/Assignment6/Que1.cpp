/*Q1.
	class Number
	{
		public:
			int x;
			int y;
	};
Create 2 objects in main().Scan their data and print.*/
#include<iostream>
using namespace std;

class Number
	{
		public:
			int x;
			int y;
			
			
	};

int main()
{
    Number obj;
    
    cout<<"\nEnter the numbers = ";
    cin>>obj.x>>obj.y;
    cout<<"\nThe values are = ";
    cout<<obj.x<<" "<<obj.y;
	return 0;
}


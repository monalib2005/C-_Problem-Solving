/*2.
	class Number
	{
		private:
			int x;
			void scandata();
			void printdata();
	};
	int main()
	{
		//Scan and print data of one object of Number.
	}*/
#include<iostream>
using namespace std;

class Number
{
	private:
		int x;
		void scandata();
		void printdata();
		friend int main();
};

int main()
{
	Number obj;
	obj.scandata();
	obj.printdata();
	return 0;
}

void Number::scandata()
{
	cout<<"\nEnter the number = ";
	cin>>x;
}

void Number::printdata()
{
	cout<<"\nThe number is = ";
	cout<<x;
}

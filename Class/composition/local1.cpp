#include<iostream>
using namespace std;

int main()
{
	class Number
	{
		public:
			int x;
			void show()
			{
				cout<<"\nx = "<<x;
			}
	};
	Number temp;
	temp.x = 12;
	temp.show();
	return 0;
}

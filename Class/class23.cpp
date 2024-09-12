#include<iostream>
using namespace std;
void show();
class Number
{
	public:
		void show()
		{
			cout<<"\nIn class show()";
		}
		
};

int main()
{
	Number T1,T2;
	T1.show();
	show();
	return 0;
}
void show()
{
	cout<<"\nIndependent show()";
}

#include<iostream>
using namespace std;

class Number
{
	private:
		int x;
		//static int w;
	public:
	    int y;
		static int z;
		
		void show()
		{
			x = 5;
			cout<<x<<" "<<y;
		}	
};
int Number::z;
//Number::w;
int main()
{
	Number T1,T2;
	//T1.x = 5; ---->can't access because they are private
	T1.y = 7;
	//Number::w = 6; ---->can't access beacuse it is private
	Number :: z = 9; 
	return 0;
}

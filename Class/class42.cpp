#include<iostream>
using namespace std;
class Number
{
	private:
		static int x;
	public:
	    static int y;
		
		void show()
		{
			cout<<Number::x;
			cout<<Number::y;
			
			cout<<x;
		}	
};
int Number::x;
int Number::y;
int main()
{
	//cout<<Number::x; -->it is private
	cout<<Number::y;
	Number var1,var2;
	var1.show();
	return 0;
}

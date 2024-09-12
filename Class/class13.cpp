#include<iostream>
using namespace std;
class Number 
{
	public:
		int x,y;
		
		void show()
		{
			cout<<"\nIn memember function()";
		}
		void print()
		{
			show();
		}
};
void print(Number Temp);
int main()
{
	Number T1 , T2;
	T1.x = 4;
	T1.y = 6;
	print(T1);
	return 0;
}
void print(Number Temp)
{
	cout<<Temp.x<<Temp.y;
	//cout<<T1.x<<T1.y; //This will show error
}

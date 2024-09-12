//Q8.WAP to understand the diamond problem.
#include<iostream>
using namespace std;

class Grand
{
	public:
		void show()
		{
			cout<<"\nIn grand show()";
		}
};
class Parent1:virtual public Grand
{
		
};

class Parent2:virtual public Grand
{
	
};

class Child:public Parent1,public Parent2
{
	
};

int main()
{
	Child obj;
//	obj.Parent1::show();
//	obj.Parent2::show();
    obj.show();
    obj.Grand::show();
	return 0;
}

//Q3.WAP to understand working of abstract classes.Perform experiments.
#include<iostream>
using namespace std;

class Parent
{
	private:
		virtual void show() = 0; //it is get ignores as it is also declared in private
	public:
		void disp()
		{
			cout<<"\nIn parent disp()";
		}
};

class Child:public Parent
{
	public:
		void show()
		{
			cout<<"\nIn child show()";
		}
};

int main()
{
	//Parent p;
	//p.disp();  -->we can't make objects of a abstract classes
	
	Child c;
	c.show(); 
	c.disp();
	return 0;
}

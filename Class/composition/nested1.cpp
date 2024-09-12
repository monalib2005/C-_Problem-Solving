#include<iostream>
using namespace std;

class Outer
{
	public:
		int x;
		class Inner
		{
			public:
				int y;
				class Inner2
				{
					public:
						int z;
				};
				Inner2 temp2;
				
		};
		Inner temp;
		Inner::Inner2 temp3;
};

int main()
{
	Outer var;
	cout<<sizeof(var);  //it is giving 4 bytes which is of x it is not taking y bcoz we are not created the object of inner class
	var.x = 5;
	cout<<"\nx = "<<var.x;
	
//	Outer::Inner obj;
//	cout<<sizeof(obj);
//	obj.y = 10;
//	cout<<obj.y;

    var.temp.y = 70;
    cout<<"\ny = "<<var.temp.y;
    
    
    //Inner2 class
    var.temp.temp2.z = 6;
    cout<<"\nz = "<<var.temp.temp2.z;
    
    //using object temp3
    var.temp3.z = 12;
    cout<<"\nz = "<<var.temp3.z;
    
    Outer::Inner::Inner2 obj2;
    obj2.z = 15;
    cout<<"\nz = "<<obj2.z;
	return 0;
}

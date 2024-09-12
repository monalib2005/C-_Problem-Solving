SECTION-1
For given main() functions,define remaining program.
ind = independant function
mem = member function

1.
class Number
{
	private:
		int x,y;
};
int main()
{
	Number T1,T2;
	cin>>T1>>T2;
	cout<<T1<<T2;
}

2.
class Number
{
	private:
		int x,y;
};

int main()
{
	Number T1,T2,T3;
	cin>>T1>>T2;
	T3 = T1 + T2; //ind
	cout<<T3;
	T3 = T1 + T2 * T1; // * using mem
	cout<<T3;
}

3.
class Student
{
	private:
		char stdname[30];
		int age;
};
int main()
{
	Student std1,std2;
	cout<<"\nEnter data for students = ";
	cin>>std1>>std2;
	cout<<"\nYou entered = ";
	cout<<std1;
	cout<<std2;
}
//Given input and output messages properly.

4.
class Distance
{
	private:
		int km,mtr;
};
int main()
{
	Distance D1,D2;
	cin>>D1>>D2;
	if(D1>D2)
	{
		cout<<"D1 > D2";
	}
	else
	{
		cout<<"D1 < D2";
	}
};

5.
class Distance
{
	private:
		int km,mtr;
};

int main()
{
	Distance D1,D2,D3;
	if(D1>D2 && D1>D3)
	{
		cout<<"Largest distance is = "<<D1;
	}
	else if( D2>D1 && D2>D3 )
	{
		cout<<"\nLargest distance is = "<<D2;
	}
	else
	{
		cout<<"\nLargest distance is "<<D3;
	}
}
======================================================
SECTION-2

Write 2 programs for each of the following questions..
1-Without operator overloading.
2-With operator overloading.
Use both types.(member and independant)

1.Scan 5 distances from user in km,mtr.Find the largest distance.
User may give input in wrong format.e.g. 3 km 2450 mtr.

2.Scan 6 distances frm user.Sort them in asending order.

3.Scan data for 6 employees(name,age,hometown).
Scan employee to search in database.Check if that employee is present or not.

4.Define class String to make comparison operations of string simple
using operator overladng.

5.Create a database of 6 students.Sort this database in ascending order
by name.

====================================================
SECTION-3
1.WAP to understand static members of class.

2.WAP to understand nested and local classes.

3.WAP to understand constant objects and constant member functions.

4.Create a compiletime linked list of Nodes T1,T2,T3.
Print all the data sing T1.

5.Create a linked list of 3 runtime objects of class Node.
Store address of first Node in head pointer.
Print all the data using head pointer.

====================================================

Q1.WAP to explain constructor and destructor for runtime objects.
Q2.WAP to explain copy constructor while passing parameter by value.
Q3.Complete the code for following main() function.
class Number
{
	int x,y;
};
int main()
{
	Number T1,T2,T3(1);
	T3 = T1 * T2;
	T3.show();
	T3 = T3 ^ 2; //treat ^ as power operator.
	//It should perform x^2 and y^2; 
	T3.show();
}

Q4.Complete the code for following main() function.
class Number
{
	int x,y;
};
int main()
{
	Number T1(3,7);
	Number T2;
	T2 = -T1;
	T1.show();// should print 3,7
	T2.show();// should print -3,-7
}

Q5.Complete the code for following main() function.
class Number
{
	int x,y;
};
int main()
{
	Number T1(3,6),T2(5,9),T3(2,9),T4;
	T4 = ++T1;
	T4.show();
	T4 = T1 - T2 + T3;
	T4.show();
	T4 = ~T3; //bitwise complement.
	T4.show();// will print ~T3.x and ~ T3.y
}

Q6.Complete the code for following main() function.
class Distance
{
	int inch,feet;
};
int main()
{
	Distance D1,D2;
	scan(D1);
	D2.scan();
	~D1;
	~D2;
	//~ operator is used here to convert distance in proper format
	//e.g. input = 3 feet 27 inch
	//output = 5 feet 3 inches
	D3 = D1 + D2;
	~D3;
	D3.show();
}

Q7.Complete the code for following main() function.
class Distance
{
	int km,mtr;
};
int main()
{
	Distance D1,D2,D3,D4;
	scan(D1);
	scan(D2);
	scan(D3);
	D4 = D1>D2?D1:D2;
	D4 = D4<D3?D3:D4;
	D4.show();
}

Q8.Complete the program for following main() function.
Do not use operator overloading.Write code which is necessary to implement
statements written in comment.
int main()
{
	Number T1,T2,T3,T4,T5(0);
	//T5 = T1 + T2;
	T5.show();
	//T5 = T1 + T2 + T3;
	T5.show();
	//T5 = T1+T2*T3;
	T5.show();	
	//T5 = T1+T2+T3+T4;
	T5.show();
}

Q9.
Complete the code using operator overloading for following main() function.
class Distance
{
	public:
		int km;
		int mtr;
};

int main()
{
	Distance D1,D2;
	~D1;
	~D2;
	//Above 2 statements should scan data for D1 and D2.
	if(D1 == D2)
	{
		cout<<"Both distances are equal";
	}
	ilse if(D1>D2)
	{
		cout<<"D1 > D2";
	}
	else if(D1<D2)
	{
		cout<<"D1<D2";
	}
}

Q10.
class String
{
	public:
		char str[30];
};
int main()
{
	String S1,S2;
	S1.getString();
	S2.getString();
	if(S1 == S2)
	{
		cout<<"Both strings are equal";
	}
	else
	{
		cout<<"\nStrings are not equal";
	}
}	

Q11.
class Distance
{
	public:
		int km;
		int mtr;
};
int main()
{
	Distance D1,D2;
	cout<<"Enter 2 distances = ";
	cin>>D1>>D2;
	if(D1 == D2)	
	{
		cout<<"\nBoth distances are equal";
	}
	else
	{
		cout<<"\nNot equal";
	}
}

Q12.
class Student
{
	private:
		char name[30];
		int age;
};
Create a database of 8 students.Print name and age of all
those students whose age is greater than 21.
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)

Q13.
class Student
{
	private:
		char name[30];
		int age;
};
Create a database of 8 students.Print name and age of all
those students whose name is "virat".	
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)

Q14.
class Time
{
	private:
		int hrs,mins;
}
int main()
{
	Time T1,T2,T3;
	T1.scan();
	T2.scan();
	~T1;
	~T2;
	//~ is overloaded here to convert given time in correct format.
	//if input is 3 hrs 90 mins
	//output will be 4 hrs 30 mins.
	T3 = T1 + T2;
	~T3;
	T3.show();
}

Q15.
class Time
{
	private:
		int hrs,mins;
}
Scan time for 3 objects from user.
Find the object with largest time.
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)

Q16.
class Student
{
	private:
		char name[30];
		int age;
};
Create a database of 8 students.Print name and age of the
student having maximum age.
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)

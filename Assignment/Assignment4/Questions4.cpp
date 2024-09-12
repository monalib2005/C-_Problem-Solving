Solve array questions in the following using any one of the above techniquue which is mentioned.

1.Scan array of 10 integers.Copy it in another array.
Print both arrays.
([ ] notation)

2.Scan array of 6 integers from user.Find the largest value from array.
(pointer notation)

3.Declare and itialize an array of 8 integers.Find the smallest value from array.
(pointer notation)

4.Scan array of 6 characters from user and print them.
([] notation)

5.Scan array of 4 alphabets from user.Print ascii value of each alphabet in array.
([] notation)

6.Keep scanning a number from user.Print addition of positive and negative numbers seperately.

7.Scan array of 8 integers from user.Write menu driven program for following activities.
-find largest value
-find smallest value
-Scan a number from user and check if it is present in the array or not.

8.Scan 2 integers from user.Find their LCM.

9.Scan a character from user.Define function check() to check if it is uppercase alphabet,lowercase alphabet or 
a digit.

10.Scan a character from user.Define function change() to change this character to uppercase if it is in lowercase.
Function returntype should be void.

11.Write a program to explain all rules of references in CPP.

12.WAP to understand the concept of enumeration.

13.WAP to check working of setw() and endl.

14.WAP to explain static concept.(Perform some experiments on your own and get familiar with static)

15.Scan length and width of rectangle in main().Define function rectangle() to find area and perimeter of rectangle.
Use parameter passing by reference.

16.Repeat question 15.Use parameter passing by address.

17.Scan radius of circle from user in main().Define function circle() to find area and circumference of circle.
Use parameter passing by reference.

18.Repeat Q17.Use parameter passing by address.

19.Scan a number from user in main().Define functions to find square and cube of a number.
Print both square and cube in main().
(Use parameter passing by value.)

20.Scan a number from user in main().Define functions to find square and cube of a number.
Define only one function power() and print both results in main().
(Use parameter passing by reference)

21.Scan a number from user in main().Define functions to find square and cube of a number.
Define only one function power() and print both results in main().
(Use parameter passing by address)

22.Scan principle amount,number of years and rate of interest from user in main().
Define function smpintr() to calculate simple interest.Print simple interest in main().
Calculate simple interest in function and return it to main()

23.Repeat Q22.Returntype of smpintr() must be void now.Print simple interest in main().

24.Scan 2 integers from user.Find their GCD.

25.Complete the remaining program for following main() functions.

Draw stackframe for each one in notebook.

A)Do not change main() function.
	int main()
	{
		int a,b,add,sub;
		cout<<"\nEnter 2 integers = ";
		cin>>a>>b;
		operation(a,b,add,sub);
		cout<<"\nAddition = "<<add<<"  Subtraction = "<<sub;
		return 0;
	}

B)Do not change main() function.	
	int main()
	{
		int a,b;
		getdata(&a,&b); //this function scans data for its parameters.
		int sq,cu;
		sq = square(a);
		cu = cube(&a);
		cout<<"\nSquare = "<<sq<<" Cube = "<<cu;
	}

C)Complete remaining main() function.	
	int main()
	{
		int a,b;
		int *pa,*pb;
		//scan a and b using pa and pb.
		//print addition and subtraction of a and b using pa and pb;
	}

D)For below main() function,scan 2 integers from user and print them.
Do not declare your own variable.Use only given.
	int main()
	{
		int *ptr;
	}

===========================================================
===========================================================
Fill in the blanks to get the required output.
Draw stackframe for each program in Notebook.
Output of each cout is mentioned in comment.
1)
void myfun(---- m,---- n)
{
	---- ;
	---- ;
}

int main()
{
	int a = 10;
	int b = 20;
	
	cout<<a<<" "<<b;  //10  20
	
	myfun(----,----);
	
	cout<<a<<" "<<b;  //25  30

	return 0;
}
(can be completed in two different ways)
=============================================
2)

---- myfun()
{
	---- ;
}


int main()
{
	int a = 10;
	
	cout<<a;  //10  
	
	---- = myfun();
	
	cout<<a;  //25 

	return 0;
}
=============================================
3)

---- myfun(---- m)
{
	---- ;
	---- ;
}


int main()
{
	int a = 10;
	int b = 20;
	
	cout<<a<<" "<<b;  //10  20
	
	a = myfun(&b);
	
	cout<<a<<" "<<b;  //25  30

	return 0;
}
=============================================
4)

void myfun( ---- m)
{
	----;
}

int main()
{
	int x = 10;
	int *p;
	cout<<"\nx = "<<x;  //10
	---- ;
	
	myfun(&p);
	
	cout<<"\nx = "<<x;  //15
	
	return 0;
}
=============================================
5)

void myfun(----m, ----n)
{
	---- ;
	---- ;
}

int main()
{
	int a = 10;
	int b = 20;
	cout<<a<<" "<<b;  //10  20  
	----;
	----;
	
	p = &a;
	q = &b;
	
	myfun(&p,&q);
	
	cout<<a<<" "<<b;  //25  40

	return 0;
}
=============================================
6)
void myfun( ---- m)
{
	----;
}

int main()
{
	int x = 10;
	int *p;
	cout<<"\nx = "<<x; //10
	p = &x ;
	
	myfun(p);
	
	cout<<"\nx = "<<x; //15
	return 0;
}
=============================================
7)

void myfun(----m, ----n)
{
	---- ;
	---- ;
}

int main()
{
	int a = 10;
	int b = 20;
	cout<<a<<" "<<b;  //10  20  
	int * p;
	int * q;
	---- ;
	---- ;
	myfun(p,&q);
	cout<<a<<" "<<b;  //25  40
	return 0;
}
=============================================
8)

void yourfun(---- p)
{
	---- ;
}

void myfun( ---- m)
{
	yourfun(&m);
}

int main()
{
	int x = 10;
	cout<<"\nx = "<<x;  //10
	
	myfun(&x);
	
	cout<<"\nx = "<<x;  //20
	return 0;
}
=============================================
9)

void yourfun(---- , ----)
{
	---- ;
	---- ;
}

void myfun(int *m, int *n)
{
	yourfun(&m,&n);
}

int main()
{
	int a = 10;
	int b = 20;
	cout<<a<<" "<<b;  //10  30  
	myfun(&a,&b);
	cout<<"\n"<<a<<" "<<b;  //25  40
	return 0;
}
=============================================
10)
void yourfun( ---- **p)
{
	---- ;
}

void myfun( ---- * m)
{
	yourfun(---);
}

int main()
{
	float x = 10.7;
	cout<<"\nx = "<<x;  //10.7
	
	myfun(&x);
	
	cout<<"\nx = "<<x;  //20.5
	return 0;
}
==========================

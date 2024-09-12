/*4.WAP to understand concept of function overloading.
Write program for addition of 2 integers,addition of 3 integers,addition of 2 fractions.
Try to generate ambiguity error and solve it using explicit typecasting.*/
#include<iostream>
using namespace std;
void add(int a,int b);
void add(int a,int b,int c);
void add(float a,float b);
int main()
{
	add(5,10);
	add(3,4,2);
	add((float)2.54,(float)5.76); //If we do not determine parameter explicit datatype.
	return 0;
}
void add(int a,int b)
{
	cout<<a+b<<'\n';
}
void add(int a,int b,int c)
{
	cout<<a+b+c<<"\n";
}
void add(float a,float b)
{
	cout<<a + b;
}

/*3.Write a program to understand pointer arithmetic.
-create an array of 5 integers.
-create an array of 5 characters
-create an array of 5 double values.
-Print addresses and values of each array,check the difference between elements.
-Create three pointers for three arrays.Using these three pointers print all the array elements.
-Using integer pointer of integer array,print square of each element in allay.
-using character pointer of character array,print ascii value of each character
-using double pointer for double aray,print values greater than 10.
-scan a number x from user.Using integer pointer search that x in integer array.
-declare a target array of double datatype,using double pointer,copy double array
into target array.*/

#include<iostream>
using namespace std;

int main()
{
	int i;
	int num[5] = {5,3,9,6,1};
	char ch[5] = {'F','Y','a','h','S'};
	double no[5] = {22.45,7.45,11.35,6.45,20.3};
	int *p;
	char *q;
	double *r;
	p = &num[0];
	q = &ch[0];
	r = &no[0];
	
	//-Print addresses and values of each array,check the difference between elements.
	cout<<"\nThe values and corresponding of arrays are as follows = \n";
	for(i =0;i<=4;i++)
	{
		cout<<"value = "<<num[i]<<" "<<"address = "<<(long long int)&num[i]<<"\n";
	}
	cout<<"\n";
	for(i =0;i<=4;i++)
	{
		cout<<"value = "<<ch[i]<<" "<<"address = "<<(long long int)&ch[i]<<"\n";
	}
	cout<<"\n";
	for(i =0;i<=4;i++)
	{
		cout<<"value = "<<no[i]<<" "<<"address = "<<(long long int)&no[i]<<"\n";
	}
	cout<<"\n";
	//Create three pointers for three arrays.Using these three pointers print all the array elements.
	cout<<"values of num array = ";
	for(i = 0;i<=4;i++)
	{
		cout<<*(p+i)<<",";
	}
	cout<<"\nvalues of character array = ";
	for(i = 0;i<=4;i++)
	{
		cout<<*(q+i)<<",";
	}
	cout<<"\nvalues of double array = ";
	for(i = 0;i<=4;i++)
	{
		cout<<*(r+i)<<",";
	}
	cout<<"\n";
	//Using integer pointer of integer array,print square of each element in array.
	cout<<"\nSquare of the elements in num array = ";
	for(i = 0;i<=4;i++)
	{
		int squ;
		squ = *(p+i) * *(p+i);
		cout<<squ<<",";
	}
	cout<<"\n";
	//-using character pointer of character array,print ascii value of each character.
	cout<<"\nAscii values of charcters is given as = \n";
	for(i=0;i<=4;i++)
	{
		
		cout<<"chara = "<<*(q+i)<<"  "<<"Ascii value = "<<(int)*(q+i)<<"\n";
	}
	cout<<"\n";
	//using double pointer for double array,print values greater than 10.
	cout<<"\nThe values greater than 10 are = ";
	for(i=0;i<=4;i++)
	{
		if(*(r+i)>10)
		{
			cout<<*(r+i)<<",";
		}
	}
	cout<<"\n";
	//-scan a number x from user.Using integer pointer search that x in integer array.
	int x;
	cout<<"Enter the value to be searched in the integer array = ";
	cin>>x;
	for(i=0;i<=4;i++)
	{
		if(x == *(p+i))
		{
			cout<<"\nThe value is present in the array at "<<i<<" index.";
		}
	}
	cout<<"\n";
	/*declare a target array of double datatype,using double pointer,copy double array
    into target array.*/
    double target[5];
    double *s;
    s = &target[0];
    for(i=0;i<=4;i++)
	{
		target[i]=no[i];
	}
	cout<<"\nThe values in target array are = \n";
	for(i=0;i<=4;i++)
	{
		cout<<target[i]<<",";
	}
	return 0;
}

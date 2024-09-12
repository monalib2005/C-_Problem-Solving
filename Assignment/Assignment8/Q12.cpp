//.Write a program to check difference between cin and cin.getline() when scanning string.
#include<iostream>
using namespace std;

int main()
{
	char str[20];
	int x;
	
//	cout<<"\nENter the value of x = ";
//	cin>>x;
//	cout<<x;
//	
//	cout<<"\nEnter the string = ";
//	cin.getline(str,20);
//	cout<<str; ---->In this code string will not take input because here there is \n character in input buffere
                    //and this will happen when we use cin before cin.getline()
                    
    cout<<"\nEnter the string = ";
	cin.getline(str,20);
	cout<<"\nEnter the number = ";
	cin>>x;
	
	cout<<"\nstr = "<<str;
	cout<<"\nx = "<<x;   //this code will give correct output because we use cin.getline() before cin statement                
	return 0;
}

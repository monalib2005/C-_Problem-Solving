//Scan string from user.Check if that string is pallindrome or not.
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
//	int i,j=0;
//	char source[20];
//	char target[20];
//	cout<<"\nEnter the string = ";
//	cin.getline(source,20);
//	while(source[i]!='\0')
//	{
//		i++;
//	}
//	
//	int length = i;
//	
//	for(j=0;j<=length-1;j++)
//	{
//		target[j] = source[length-j-1];
//	}
//	target[length] = '\0';
//	
//	if(strcmp(target,source)==0)
//	{
//		cout<<"It is palindrome.";
//	}
//	else
//	{
//		cout<<"\nIt is not palindrome.";
//	}



    //best logic
    
    char str[20];
    cout<<"\nEnter the string = ";
    cin.getline(str,20);
    int len;
    len = strlen(str);
    int i =0;
    int j = len-1;
    while(i<=j)
	{
		if(str[i]==str[j])
		{
			i++;
		    j--;
		}
		else
		{
			break;
		}
		
	}
	
	if(i>j)
	{
		cout<<"\nThe word is a palindrome.";
	}
	else
	{
		cout<<"\nIt is not a palindrome.";
	}
	return 0;
}

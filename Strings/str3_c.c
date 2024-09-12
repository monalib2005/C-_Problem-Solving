#include<stdio.h>

int main()
{
	char mystr[15];
	puts("Enter string ");
	
	//3 teminating characters for scanf()
	//\n , space , tab \t
	//scanf() can not scan string with multiple words
	//scanf("%s",&mystr[0]); 
	gets(mystr);  //works escpicellay for strings only.So no need to mention format specifier
	//gets() terminate at \n only
	//gets() is a dangerous function
	puts(mystr);
	return 0;
}

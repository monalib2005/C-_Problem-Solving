#include<iostream>
using namespace std;
/*Q16.Scan marks of 4 subjects of a student.If average of 4 subjects is greater than 75,
print message DISTINCTION,else print message "STUDY MORE".*/
int main()
{
	int mark1,mark2,mark3,mark4;
	float avg;
	cout<<"\nEnter marks of 4 subjects = ";
	cin>>mark1>>mark2>>mark3>>mark4;
	
	avg = (mark1+mark2+mark3+mark4)/4;
	
	cout<<"\nAverage is "<<avg;
	avg >75 ? cout<<"\nDISTINCTION." : cout<<"\nSTUDY MORE.";
	return 0;
}

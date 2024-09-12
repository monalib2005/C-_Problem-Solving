#include<iostream>
using namespace std;
/*Q18.Scan salary of a person.If salary is greater than 10000, add 5% bonus in the salary.
Else add 8% bonus in the salary.Print final salary.*/
int main()
{
	int salary;
	cout<<"\nEnter salary = ";
	cin>>salary;
	
	if(salary > 10000)
	{
		cout<<"\nFinal Salary = "<<salary + ((salary*5)/100);
	}
	else
	{
		cout<<"\nFinal Salary = "<<salary + ((salary*8)/100);
	}
	return 0;
}

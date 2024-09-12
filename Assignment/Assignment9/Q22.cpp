/*22.Read carefully and complete the code for mentioned task.
class Employee
{
	public:		
		char empname[30];
		Date birthdate;
		Date joiningdate;
		//Date is user defined class.
};
int main()
{
	Employee emp1,emp2;
	//scan and print data of emp1 and emp2.
}*/
#include<iostream>
using namespace std;

class Date
{
	public:
		char birthd[10];
		char joind[10];
};
class Employee
{
	public:		
		char empname[30];
		Date birthdate;
		Date joiningdate;
		//Date is user defined class.
};

int main()
{
	Employee emp1,emp2;
	//scan and print data of emp1 and emp2.
	cout<<"\nEnter the name of employee = ";
	cin.getline(emp1.empname,30);
	cout<<"\nEnter birthdate = ";
	cin.getline(emp1.birthdate.birthd,10);
	cout<<"\nEnter the joining date = ";
	cin.getline(emp1.joiningdate.joind,10);
	cin.ignore(1);
	
	cout<<"\nEnter the name of employee = ";
	cin.getline(emp2.empname,30);
	cout<<"\nEnter birthdate = ";
	cin.getline(emp2.birthdate.birthd,10);
	cout<<"\nEnter the joining date = ";
	cin.getline(emp2.joiningdate.joind,10);
	
	//printing data
	cout<<"\nEmp1 = "<<emp1.empname<<"  "<<"Birthdate = "<<emp1.birthdate.birthd<<"  "<<"Joindate = "<<emp1.joiningdate.joind;
	cout<<"\nEmp2 = "<<emp2.empname<<"  "<<"Birthdate = "<<emp2.birthdate.birthd<<"  "<<"Joindate = "<<emp2.joiningdate.joind; 
}



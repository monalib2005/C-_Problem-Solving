#include<iostream>
using namespace std;
/*Q13.A customer has deposited P Rs in bank in the form of Fixed Deposit for N years
having rate of interest 5.00%.(Here P ad N is the input from user).
Find the total amount he will get after N years.If total amount he will receive 
is greater than 12000/-,then suggest himto invest them in mutual fund 
else suggest him to buy the gold.*/
int main()
{
	int P,N;
	float interest,total;
	cout<<"\nEnter amount deposited = ";
	cin>>P;
	cout<<"\nEnter no. of years = ";
	cin>>N;
	
	interest = N*((P*5)/100);
	total = P + interest;
	
	cout<<"\nThe total amout is "<<total;
	
	total > 12000 ? cout<<"\nInvest them in mutual fund." : cout<<"\nSuggest you to buy the gold.";
	return 0;
}

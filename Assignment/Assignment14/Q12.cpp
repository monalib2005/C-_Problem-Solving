/*Q7.
class City
{
	public:
		string name;
		int population;
};
Create a database of 5 cities.Print the database.
If user enters same city again,give him message that
the city is already present.Ask him to enter new city name.
If he enters population less than 100,give him message wrong population.
Ask him to enter correct population.*/
#include<iostream>
using namespace std;

class City
{
	public:
		string name;
		int population;
		
};

int main()
{
	City c[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter city name = ";
		getline(cin,c[i].name);
//		cout<<"\nEnter population = ";
//		cin>>c[i].population;

		for(j=0;j<=i-1;j++)
		{
			if(c[j].name == c[i].name)
			{
				cout<<"\nthe city is already present.";
				cout<<"\nEnter other city name = ";
				cin.ignore(1);
				i--;
				break;
			}	
		}
		
		cout<<"\nEnter population = ";
     	cin>>c[i].population;
		cin.ignore(1);
		if(c[i].population<100)
		{
			cout<<"\nwrong population.";
			cout<<"\nEnter correct population = ";
			cin>>c[i].population;
			cin.ignore(1);
		}
	}
	
	
	for(i=0;i<5;i++)
	{
		cout<<"\nname = "<<c[i].name;
		cout<<"\npopulation = "<<c[i].population;
	}
	
	return 0;
}

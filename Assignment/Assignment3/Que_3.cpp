//Q3.Write a menu driven program for user to choose from any given 3 language.
//e.g.If user enters 1,print marathi,for 2,print hindi and so on.
#include<iostream>
using namespace std;

int main()
{
	int choice;
	cout<<"1 - Marathi"<<"\n"<<"2 - English"<<"\n"<<"3 - Hindi";
	cout<<"\n"<<"Enter your choice = ";
	cin>>choice;
    switch(choice)
	{
		case 1:
			cout<<"Marathi";
			break;
	    case 2:
		    cout<<"English";
		    break;
		case 3:
		    cout<<"Hindi";
			break;		    
				
	}
	 return 0;
}

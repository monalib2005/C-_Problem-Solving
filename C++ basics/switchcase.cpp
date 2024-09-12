#include<iostream>
using namespace std;

int main()
{
	cout<<"1 - Marathi"<<"\n2 - Hindi"<<"\n3-English";
	int choice;
	cout<<"\nEnter your choice = ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"Marathi";
		    break;
		case 2:
		    cout<<"Hindi";
		    break;
		case 3:
		    cout<<"English";
		    break;
		default:
		    cout<<"wrong statement";	    
				
	}
	
	cout<<"\nA - Apple"<<"\nB - Banana"<<"\nC - Chikoo";
	char chose;
	cout<<"\nEnter your choice = ";
	cin>>chose;
	
	switch(chose)
	{
		case 'A':
			cout<<"Apple";
			break;
		case 'B':
		    cout<<"Banana";
			break;
		case 'C':
		    cout<<"Chikoo";
			break;
		default:
		    cout<<"Wrong input";		
	}
	return 0;
}

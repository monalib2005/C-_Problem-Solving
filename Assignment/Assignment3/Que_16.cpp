1/*Q16.WAP to ask user to choose between circle and rectangle.If user choose circle,ask him to choose between 
area and circumference.Print the result for users choice.Similarly if user chooses rectangle,ask him
to choose between area and perimeter.Print result according to user's choice.
Write 2 different codes for this program
	-using if else
	-using switch case.(declare all variable outside switch always)*/
#include<iostream>
using namespace std;

int main()
{
	//code using if else:
	/*int choice1,choice2,choice3;
	float area1,circum;
	int area2,peri;
	int rad,length,width;
	cout<<"\n1-circle\n2-rectangle";
	cout<<"\nEnter your choice = ";
	cin>>choice1;
	if(choice1 == 1)
	{
		cout<<"\n1-area\n2-circumference.";
		cout<<"\nEnter your choice = ";
		cin>>choice2;
		if(choice2 == 1)
		{
			cout<<"Enter the radius = ";
			cin>>rad;
			area1 = 3.14*rad*rad;
			cout<<"\nArea = "<<area1;
		}
		else if(choice2 == 2)
		{
			cout<<"Enter the radius = ";
			cin>>rad;
			circum = 2*3.14*rad;
			cout<<"\ncircumference = "<<circum;
		}
		else
		{
			cout<<"\nwrong input.";
		}
	}
	else if(choice1 == 2)
	{
		cout<<"\n1-area\n2-perimter.";
		cout<<"\nEnter your choice = ";
		cin>>choice3;
		if(choice3 == 1)
		{
			cout<<"Enter the length and width = ";
			cin>>length>>width;
			area2 = length * width;
			cout<<"\nArea = "<<area2;
		}
		else if(choice3 == 2)
		{
			cout<<"Enter the length and width = ";
			cin>>length>>width;
			peri = 2*(length + width);
			cout<<"\nperimter  = "<<peri;
		}
		else
		{
			cout<<"\nwrong input.";
		}
	}*/
	
	//using switchcase:
	int choice1,choice2,choice3;
	float area1,circum;
	int area2,peri;
	int rad,length,width;
	
	cout<<"\n1-circle\n2-rectangle";
	cout<<"\nEnter your choice = ";
	cin>>choice1;
	
	switch(choice1)
	{
	    case 1:
	    	cout<<"\n1-area\n2-circumference.";
		    cout<<"\nEnter your choice = ";
		    cin>>choice2;
	    	switch(choice2)
			{
				case 1:
					cout<<"Enter the radius = ";
			        cin>>rad;
			        area1 = 3.14*rad*rad;
			        cout<<"\nArea = "<<area1;
			        break;
			    case 2:
				    cout<<"Enter the radius = ";
			        cin>>rad;
		           	circum = 2*3.14*rad;
			        cout<<"\ncircumference = "<<circum;
					break;
				default:
				    cout<<"wrong input";
				    
		    break;		    
			}
		case 2:
		    cout<<"\n1-area\n2-perimter.";
		    cout<<"\nEnter your choice = ";
		    cin>>choice3;
			switch(choice3)
			{
				case 1:
					cout<<"Enter the length and width = ";
			        cin>>length>>width;
			        area2 = length * width;
			        cout<<"\nArea = "<<area2;
			        break;
			    case 2:
			    	cout<<"Enter the length and width = ";
			        cin>>length>>width;
			        peri = 2*(length + width);
			        cout<<"\nperimter  = "<<peri;
			        break;
			    default:
				    cout<<"\nwrong input";
		    break;    
					    
				        
			}
		default:
		    cout<<"\nwrong input";		
									
			
    }
	
	return 0;
}

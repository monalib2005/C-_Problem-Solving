#include<iostream>
#include<string.h>
#include<stdexcept>
using namespace std;

class Publication
{
	protected:
		string title;
		float price;
	public:
	    Publication():title(""),price(0.0){}
		
		virtual void getData() 
		{
			cout<<"\nEnter title = ";
			getline(cin,title);
			cout<<"\nEnter price = ";
			cin>>price;
			cin.ignore(1);
			
			if(price<0)
			{
				throw invalid_argument("negative number not allowed.");
			}
		}
		
		virtual void display()
		{
			cout<<"\ntitle = "<<title;
			cout<<"\nprice = "<<price;
		}
		
		virtual void reset()
		{
			title = "";
			price = 0.0;
		}
};

class Book:public Publication
{
	int pageCount;
	public:
		Book():pageCount(0){};
		
		void getData() override
		{
			Publication::getData();
			cout<<"\nEnter pagecount = ";
			cin>>pageCount;
			cin.ignore(1);
		}
		
		void display() override
		{
			Publication::display();
			cout<<"\nPagecount = "<<pageCount;
		}
		
		void reset() override
		{
			Publication::reset();
			pageCount = 0;
		}
};

class Tape:public Publication
{
	float playtime;
	public:
		Tape():playtime(0.0){}
		
		void getData() override
		{
			Publication::getData();
			cout<<"\nEnter play time = ";
			cin>>playtime;
		}
		
		void display() override
		{
			Publication::display();
			cout<<"\nplaytime = "<<playtime;
		}
		
		void reset() override
		{
			Publication::reset();
			playtime = 0.0;
		}
};

int main()
{
	Book book;
	Tape tape;
	
	cout<<"\nENter details of Book = ";
	try
	{
		book.getData();
	}
	catch(const exception &e)
	{
		cout<<"\nError:"<<e.what()<<"\nResetting book data to zero\n";
		book.reset();
	}
	
	cout<<"\nENter details of Tape = ";
	try
	{
		tape.getData();
	}
	catch(const exception &e)
	{
		cout<<"\nError:"<<e.what()<<"\nResetting book data to zero\n";
		tape.reset();
	}
	
	cout<<"\nDisplaying book details = ";
	book.display();
	
	cout<<"\nDisplaying details of tape = ";
	tape.display();
	return 0;
}

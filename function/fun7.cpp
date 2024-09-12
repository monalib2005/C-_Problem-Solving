#include<iostream>
using namespace std;
void show();
void print();
void display();
int main()
{
	cout<<"\n main() starts.";
	show();
	cout<<"\n main() ends";
	return 0;
}
void show()
{
	cout<<"\n hello from show()";
	print();
	display();
	cout<<"\n show ends.";
	
}
void print()
{
	cout<<"\n print() starts";
	display();
	cout<<"\nprint() ends";
}
void display()
{
	cout<<"\nEnjoyed display()";
}

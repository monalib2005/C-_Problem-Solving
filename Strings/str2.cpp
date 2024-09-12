#include<iostream>
using namespace std;

int main()
{
	char mystr[] = {3,4,5,4,5,4,6,4,6,4,6};
	mystr[0] = 'B';
	mystr[1] = 'K';
	mystr[2] = 'G';
	mystr[3] = 'I';
	mystr[4] = 'Y';
	mystr[6] = 'B';
	cout<<"\n"<<&mystr[0];
	mystr[7] = '\0';
	cout<<"\n"<<&mystr[0];
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	char mystr[8] = {'Y','A','S','H','W','A','N','T'};
	int i;
	for(i=0;i<=7;i++)
	{
		cout<<mystr[i]<<"-----"<<(long long int)&mystr[i]<<"\n";
		
	}
	return 0;
}

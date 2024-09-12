//25.Complete the remaining program for following main() functions.
/*Draw stackframe for each one in notebook.

A)Do not change main() function.
	int main()
	{
		int a,b,add,sub;
		cout<<"\nEnter 2 integers = ";
		cin>>a>>b;
		operation(a,b,add,sub);
		cout<<"\nAddition = "<<add<<"  Subtraction = "<<sub;
		return 0;
	}*/
#include<iostream>
using namespace std;
void operation(int x,int y,int &refadd,int &refsub);
int main()
{
	int a,b,add,sub;
	cout<<"\nEnter 2 integers = ";
	cin>>a>>b;
	operation(a,b,add,sub);
	cout<<"\nAddition = "<<add<<"  Subtraction = "<<sub;
	return 0;
}
void operation(int x,int y,int &refadd,int &refsub)
{
	refadd = x + y;
	refsub = x - y;
}

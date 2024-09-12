//14.Complete the following main() function.
//	int main()
//	{
//		int x;
//		int *px;
//		int **ppx;
//	};
//-assign 10 to x using px.
//-print x using ppx.
//-scan value for x using px.
//-print square of x using ppx.
//-scan value for x using ppx.

#include<iostream>
using namespace std;

int main()
{
	int x;
	int *px;
	int **ppx;
	px = &x;
	ppx = &px;
	
	*px = 10;
	cout<<**ppx<<"\n";
	cin>>*px;
	cout<<(**ppx) * (**ppx);
	cin>>**ppx;
	cout<<"\n"<<**ppx;
	
	return 0;
}

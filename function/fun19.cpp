#include<iostream>
using namespace std;
void scan(int *prad);
void operation(int r,float *parea,float *pcircum);
int main()
{
	int rad;
	float area,circum;
	scan(&rad);
	operation(rad,&area,&circum);
	cout<<"\nArea = "<<area<<"\nCircumference = "<<circum;
	return 0;
}
void operation(int r,float *parea,float *pcircum)
{
	*parea = 3.14 * r * r;
	*pcircum = 2 * 3.14*r;
}
void scan(int *prad)
{
	cout<<"\nEnte radius = ";
	cin>>*prad;
}

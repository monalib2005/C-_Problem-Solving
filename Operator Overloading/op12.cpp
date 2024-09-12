#include<iostream>
using namespace std;

class Complex
{
	private:
		int r,i;
	public:	
		Complex()
		{
			r = 0;
			i = 0;
		}
		Complex operator+(Complex c)
		{
			Complex temp;
			temp.r = r + c.r;
			temp.i = i + c.i;
			return temp;
		}
		Complex operator*(Complex c)
		{
			Complex temp;
			temp.r = r * c.r;
			temp.i = i * c.i;
			return temp;
		}
		
		friend istream& operator>>(istream &din,Complex &c);
		friend ostream& operator<<(ostream &dout,Complex &c);
		
};

int main()
{
	Complex c1,c2,c3,c4;
    
    cout<<"\nEnter the complex number1 = ";
    cin>>c1;
    cout<<"\nEnter second complex number2  = ";
    cin>>c2;
    
    c3 = c1 + c2;
    cout<<"\nAddition = "<<c3;
    c4 = c1*c2;
    cout<<"\nMultiplication = "<<c4;
	return 0;
}

istream& operator>>(istream &din,Complex &c)
{
	cout<<"\nEnter real = ";
	cin>>c.r;
	cout<<"\nEnter imaginary = ";
	cin>>c.i;
	return din;
}

ostream& operator<<(ostream &dout,Complex &c)
{
	cout<<c.r<<"+i"<<c.i<<"\n";
	return dout;
}

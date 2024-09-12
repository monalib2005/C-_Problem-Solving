#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* Next;
		
		Node(int a)
		{
			data = a;
			Next = NULL;
		}
};

int main()
{
	Node T1(10),T2(20),T3(30);
	
	T1.Next = &T2;
	T2.Next = &T3;
	
	cout<<"\nT1 = "<<T1.data;
	cout<<"\nT2 = "<<T1.Next -> data;
	cout<<"\nT3 = "<<T1.Next ->Next ->data;
	return 0;
}

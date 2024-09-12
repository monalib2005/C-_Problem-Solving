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
	Node* p;
	
	p = &T1;
	T1.Next = &T2;
	T2.Next = &T3;
	
	cout<<"\nT1 = "<<p->data;
	cout<<"\nT2 = "<<p ->Next->data;
	cout<<"\nT3 = "<<p->Next->Next->data;
	return 0;
}

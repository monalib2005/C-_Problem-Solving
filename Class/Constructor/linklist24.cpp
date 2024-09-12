#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		Node()
		{
			data = 0;
			next = NULL;
		}
};

int main()
{
	Node T1,T2,T3;
	T1.data = 2;
	T2.data = 4;
	T3.data = 7;
	
	T1.next = &T2;
	T2.next = &T3;
	T3.next = NULL;
	
	cout<<"\nT1.data = "<<T1.data;
	cout<<"\nT2.data = "<<T1.next -> data;
	cout<<"\nT3.data = "<<T1.next->next->data;
	return 0;
}

#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
		
		Node(int a)
		{
			data = a;
			next = NULL;
		}
};

int main()
{
	Node T1(10),T2(20),T3(30);
	Node *Head;
	Head = new Node(10);
	Head->next = new Node(20);
	Head->next->next = new Node(30);
	
	cout<<"\nT1 = "<<Head->data;
	cout<<"\nT2 = "<<Head->next->data;
	cout<<"\nT3 = "<<Head->next->next->data;
}

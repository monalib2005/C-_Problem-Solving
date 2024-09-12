/*5.Create a linked list of 3 runtime objects of class Node.
Store address of first Node in head pointer.
Print all the data using head pointer.*/

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
	Node* Head;
	Head = new Node(10);
	Head->Next = new Node(20);
	Head->Next->Next = new Node(30);
	
	cout<<"\nT1 = "<<Head->data;
	cout<<"\nT2 = "<<Head->Next->data;
	cout<<"\nT3 = "<<Head->Next->Next->data;
	
	return 0;
}

#include<iostream>
using namespace std;


struct Node
{
	int data;
	Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void Enqueue(int x)
{
	Node *temp = new Node;
	temp -> data = x;
	temp -> next = NULL;
	if (front == NULL && rear == NULL)
	{
		front = rear = temp;
		return;
	}
	rear -> next = temp;
	rear = temp;
}

void Dequeue()
{
	Node* temp = front;

	if (front == NULL)
	{
		cout<<"empty";
		// break;
		return;
	}
	else if(front == rear)
		front = rear = NULL;
	else
		front = front -> next;
	
	// top = top -> link;
	delete(temp);


}

void Print()
{
	Node* temp1 = front;
	cout<<"\n---Queue----  ";
	// cout<<temp1 -> data<<" ";
	while(temp1 != NULL)
	{
		cout<<temp1 -> data<<" ";
		temp1 = temp1 -> next;
		
	}
}

int main()
{
	int choice, element;
	while(1)
	{
		cout<<"\nenter your choice\n1. Push\n2. Pop\n3. Print\n";
		cin>>choice;
		switch(choice)
		{	
		case 1:
			cout<<"enter element\n";
			cin>>element;
			Enqueue(element);
			// Print();
			break;
		case 2:
			Dequeue();
			// Print();
			break;
		case 3:
			Print();
			break;
		default:
			cout<<"wrong choice";

		}
	}
	
	return 0;
}
#include<iostream>
using namespace std;


struct Node
{
	int data;
	Node* next;
};

Node* top = NULL;

void Push_head(int x)
{
	struct Node *temp = new Node;
	temp -> data = x;
	temp -> next = top;
	top = temp;	
}

void Push_tail(int element, int position)
{
	Node* temp1 = new Node;
	temp1 -> data = element;
	temp1 -> next = NULL;
	if(position == 1) {
		temp1 -> next = top;
		top = temp1;
		return;
	}
	Node* temp2 = top;
	for(int i=0;i<position-2;position++) {
		temp2 = temp2 -> next;
	}
	temp1 -> next = temp2 -> next;
	temp2 -> next = temp1;	
}

void Pop(int x)
{
	Node* temp1 = top;

	if (x == 1)
	{
		top = temp1 -> next;
		delete temp1;
		return;
	}
	// int i;
	for(int i=0;i<x-2;x++) {
		temp1 = temp1 -> next;
	}
	Node *temp2 = temp1 -> next;
	temp1 -> next = temp2 -> next;
	delete(temp2);


}

void Print() {
	Node* temp = top;
	cout<<"Forward: ";
	while(temp != NULL) {
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<"\n";
}


int main()
{
	int choice, element, position;
	while(1)
	{
		cout<<"\nenter your choice\n1. insert at head\n2. insert at nth position\n3. delete\n4. Print\n";
		cin>>choice;
		switch(choice)
		{	
		case 1:
			cout<<"enter element\n";
			cin>>element;
			Push_head(element);
			// Print();
			break;
		case 2:
			cout<<"enter element\n";
			cin>>element;
			// Push_tail(element);
			cout<<"enter position";
			cin>>position;
			// Print();
			Push_tail(element, position);
			break;
		case 3:
			cout<<"enter element\n";
			cin>>element;
			Pop(element);
		case 4:
			Print();
			break;
		default:
			cout<<"wrong choice";

		}
	}
	
	return 0;
}
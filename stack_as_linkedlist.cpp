#include<iostream>
using namespace std;


struct Node
{
	int data;
	Node* link;
};

Node* top = NULL;

void Push(int x)
{
	struct Node *temp = new Node;
	temp -> data = x;
	temp -> link = top;
	top = temp;	
}

void Pop()
{
	Node* temp;

	if (top == NULL)
	{
		cout<<"empty";
		// break;
		return;
	}
	temp = top;
	top = top -> link;
	delete(temp);


}

void Print()
{
	Node* temp1 = top;
	cout<<"\n---Stack----  ";
	cout<<temp1 -> data<<" ";
	while(temp1 -> link != NULL)
	{
		
		temp1 = temp1 -> link;
		cout<<temp1 -> data<<" ";
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
			Push(element);
			// Print();
			break;
		case 2:
			Pop();
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
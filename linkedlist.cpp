#include<iostream>
<<<<<<< HEAD
#include<stdlib.h>
using namespace std;
struct node
{
	int info;
	node *next;
} *start, *newptr, *save, *ptr;

node *create_new_node(int);
void insert_at_beg(node *);
void display(node *);

int main()
{
	
	start = NULL;
	int inf;
	char ch='y';

	while(ch=='y' || ch=='Y')
	{
		
		cout<<"Enter Information for the new node: ";
		cin>>inf;
		cout<<"\nCreating new node..!!..Press any key to continue..";
		
		newptr = create_new_node(inf);
		if(newptr != NULL)
		{
			cout<<"\n\nNew node created successfully..!!\n";
			cout<<"Press any key to continue..";
			
		}
		else
		{
			cout<<"\nSorry..!!..cannot create new node..!!..Aborting..!!";
			cout<<"\nPress any key to exit..";
			
			exit(1);
		}
		cout<<"\n\nNow inserting this node at the beginning of the list..\n";
		cout<<"Press any key to continue..\n";
		
		insert_at_beg(newptr);
		cout<<"\nNode successfully inserted at the beginning of the list.\n";
		cout<<"Now the list is:\n";
		display(start);
		cout<<"\nWant to enter more nodes ? (y/n)..";
		cin>>ch;
	}
	
}

node *create_new_node(int n)
{
	ptr = new node;
	ptr->info = n;
	ptr->next = NULL;
	return ptr;
}

void insert_at_beg(node *np)
{
	if(start==NULL)
	{
		start = np;
	}
	else
	{
		save = start;
		start = np;
		np->next = save;
	}
}

void display(node *np)
{
	while(np != NULL)
	{
		cout<<np->info<<" -> ";
		np = np->next;
	}
	cout<<"!!\n";
}

=======
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
>>>>>>> 367184b51427db58be4d39dc0e88781dd1da496f

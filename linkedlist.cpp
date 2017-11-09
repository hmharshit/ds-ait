#include<iostream>
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


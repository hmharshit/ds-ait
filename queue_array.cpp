#include<iostream>
#include<stdlib.h>
using namespace std;
int delete_from_queue(int []);
int insert_in_queue(int [], int);
void display(int [], int, int);

const int SIZE = 50;

int queue[SIZE];
int front=-1;
int rear=-1;

int main()
{
	
	int item, check;
	char ch='y';

	while(ch=='y' || ch=='Y')
	{
		cout<<"Enter item for insertion: ";
		cin>>item;
		check = insert_in_queue(queue, item);
		if(check == -1)
		{
			cout<<"\nOverflow..!!..Aborting..!!..Press a key to exit..\n";
	
			exit(1);
		}
		cout<<"Item inserted successfully..!!\n";
		cout<<"\nNow the Queue (Front...to...Rear) is:\n";
		display(queue, front, rear);
		cout<<"\nWant to insert more ? (y/n).. ";
		cin>>ch;
	}

	
	cout<<"Now deletion of elements starts...\n";
	ch='y';
	while(ch=='y' || ch=='Y')
	{
		check = delete_from_queue(queue);
		if(check == -1)
		{
			cout<<"\nUnderflow..!!..Aborting..!!..Pres a key to exit..\n";
			
			exit(2);
		}
		else
		{
			cout<<"\nElement deleted is: "<<check<<"\n";
			cout<<"Now the Queue (Front...to...Rear) is:\n";
			display(queue, front, rear);
		}
		cout<<"\nWant to delete more ? (y/n)... ";
		cin>>ch;
	}

	return 0;
}

int insert_in_queue(int queue[], int elem)
{
	if(rear == SIZE-1)
	{
		return -1;
	}
	else if(rear == -1)
	{
		front = rear = 0;
		queue[rear] = elem;
	}
	else
	{
		rear++;
		queue[rear] = elem;
	}
	return 0;
}

int delete_from_queue(int queue[])
{
	int retn;
	if(front == -1)
	{
		return -1;
	}
	else
	{
		retn = queue[front];
		if(front == rear)
		{
			front = rear = -1;
		}
		else
		{
			front++;
		}
	}
	return retn;
}

void display(int queue[], int front, int rear)
{
	if(front == -1)
	{
		return;
	}
	for(int i=front; i<rear; i++)
	{
		cout<<queue[i]<<" <- ";
	}
	cout<<queue[rear]<<"\n";
}


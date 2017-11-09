#include<iostream>
using namespace std;

#define MAX_SIZE 100
int A[MAX_SIZE];
int rear = -1, front = -1;
void Enqueue(int x)
{
	if((front == MAX_SIZE - 1) && (rear = MAX_SIZE - 1))  // overflow
	{
		cout<<"stack overflow";
		return;
	}
	else if (front == -1 && rear == -1) // is empty
	{
		rear = 0;
		front = 0;
	}
	else
	{
		rear++;
	}
	A[rear] = x;
}

void Dequeue()
{
	if (front == -1 && rear == -1)
	{
		cout<<"empty";
		// break;
		return;
	}
	else if (front == rear)
	{
		front = rear = -1;
	}
	else
	{
		front++;
	}
}

void Print()
{
	int i;
	cout<<"\n\n ----Stack---- ";
	for(i=front;i<=rear;i++)
		cout<<A[i]<<" ";
	cout<<"\n";
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
			break;
		case 2:
			Dequeue();
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
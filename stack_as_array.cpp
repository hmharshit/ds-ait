#include<iostream>
using namespace std;
#define MAX_SIZE 3
int A[MAX_SIZE];
int top = -1;

void Push(int x)
{
	if(top == MAX_SIZE - 1 )
	{
		cout<<"stack overflow";
		return;
	}
	A[++top] = x;
}

void Pop()
{
	if (top == -1)
	{
		cout<<"empty";
		// break;
		return;
	}
	top--;
}

int Top()
{
	return A[top];
} 

void Print()
{
	int i;
	cout<<"\n\n ----Stack---- ";
	for(i=0;i<=top;i++)
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
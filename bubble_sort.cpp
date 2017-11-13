#include <iostream>
using namespace std;
#define MAX_SIZE 101
void bubble_sort(int A[], int size)
{
	int i, j;
	for(i=0; i< size;i++)
	{
		for(j=i;j<size;j++)
		{
			if (A[i] > A[j])
				swap(A[i], A[j]);
		}
	}
	cout<<"\nElements are :- ";
	for(i=0; i<size; i++)
		cout<<A[i];
}

int main()
{
	int A[MAX_SIZE], size, i;
	cout<<"Enter the size of array";
	cin>>size;
	cout<<"\nEnter the elements of array :-\n";
	for(i=0; i<size; i++)
		cin>>A[i];
	cout<<"\nElements are :- ";
	for(i=0; i<size; i++)
		cout<<A[i];
	bubble_sort(A, size);
	return 0;
}
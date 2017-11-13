#include <iostream>
using namespace std;
#define MAX_SIZE 101
void selection_sort(int A[], int size)
{
	int i, j, min;
	for(i=0; i< size;i++)
	{
		min = A[i];
		for(j=i;j<size;j++)
		{
			if (min > A[j])
				swap(min, A[j]);
		}
		swap(A[i],  min);
	}
	cout<<"\nSorted Elements are :- ";
	for(i=0; i<size; i++)
		cout<<A[i]<<" ";
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
	selection_sort(A, size);
	return 0;
}
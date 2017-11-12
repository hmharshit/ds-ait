#include<iostream>
using namespace std;
int main()
{
	
	int size, arr[50], i, j, temp;
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter Array Elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting array using selection sort...\n";
	int min;
	for (int i = 0; i < size; ++i)
	{
		min = i;
		for (int j = i+1; j < size; ++j)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		swap(arr[min],arr[i]);
	}
	cout<<"Now the Array after sorting is :\n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
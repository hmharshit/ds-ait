#include<iostream>
#define MAX_SIZE 101
using namespace std;

int main()
{
	int a[MAX_SIZE], size, loc, element, beg=0, mid, end, i;
	cout<<"Enter the size";
	cin>>size;
	cout<<"Enter elements";
	for(i=0;i<size;i++)
		cin>>a[i];
	cout<<"enter search element";
	cin>>element;
	beg = 0;
	end = size - 1;
	mid = (beg + end) / 2;
	bool is_found = true;
	while(is_found)
	{
		if(a[mid]< element)
			beg = mid + 1;
		
		else if(a[mid] == element)
		{
			cout<<"is_found @ "<<mid+1;
			is_found = false;
		}
		else
			end = mid - 1;
		mid = (beg + end) / 2;
	}
	return 0;

}